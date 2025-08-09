package application;

import javafx.animation.PathTransition;
import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.paint.LinearGradient;
import javafx.scene.paint.Stop;
import javafx.scene.shape.Circle;
import javafx.scene.shape.Line;
import javafx.scene.shape.Rectangle;
import javafx.scene.shape.Polyline;
import javafx.scene.text.Font;
import javafx.scene.text.FontWeight;
import javafx.scene.text.Text;
import javafx.stage.Stage;
import javafx.util.Duration;

import java.util.Random;

public class BeanMachine  extends Application {

    // Constants
    private static final double MACHINE_WIDTH = 400;
    private static final double MACHINE_HEIGHT = 400;
    private static final double PEG_RADIUS = 5;
    private static final int ROWS = 9; // Number of rows of pegs
    private static final double BALL_RADIUS = 6;
    private static final double SLOT_WIDTH = 40;

    @Override
    public void start(Stage primaryStage) {
        Pane gamePane = new Pane();

        // Start position of the machine for bottom-center alignment
        double centerX = MACHINE_WIDTH / 0.6;
        double startY = 100; // Start Y for the top of the machine
        double bottomY = MACHINE_HEIGHT - 40;

        // Triangle outline for the machine
        Line leftLine = new Line(centerX, startY, centerX - MACHINE_WIDTH / 2, bottomY);
        Line rightLine = new Line(centerX, startY, centerX + MACHINE_WIDTH / 2, bottomY);
        Line bottomLine = new Line(centerX - MACHINE_WIDTH / 2, bottomY, centerX + MACHINE_WIDTH / 2, bottomY);

        leftLine.setStroke(Color.DARKBLUE);
        rightLine.setStroke(Color.DARKBLUE);
        bottomLine.setStroke(Color.DARKBLUE);

        gamePane.getChildren().addAll(leftLine, rightLine, bottomLine);

        // Draw pegs in a triangular formation
        Circle[][] pegs = new Circle[ROWS][];
        for (int row = 0; row < ROWS; row++) {
            pegs[row] = new Circle[row + 1];
            for (int i = 0; i <= row; i++) {
                double x = centerX - row * SLOT_WIDTH / 2.0 + i * SLOT_WIDTH;
                double y = startY + row * 30;
                Circle peg = new Circle(x, y, PEG_RADIUS);
                peg.setFill(Color.DARKRED);
                pegs[row][i] = peg;
                gamePane.getChildren().add(peg);
            }
        }

        // Draw vertical slots at the bottom
        int[] slots = new int[ROWS + 1]; // Adjust array size for 11 slots (0-10)
        for (int i = 0; i <= ROWS; i++) { // Loop to include 11 slots (0-10)
            // if (i == 10) continue; // Skip the last slot boundary
            double x = centerX - ROWS * SLOT_WIDTH / 2.0 + i * SLOT_WIDTH;

            Rectangle slotBoundary = new Rectangle(x - SLOT_WIDTH / 2, bottomY, SLOT_WIDTH, 200);
            slotBoundary.setStroke(Color.DARKRED);
            slotBoundary.setFill(null); // Transparent fill
            gamePane.getChildren().add(slotBoundary);

            // Add slot labels centered under each slot
            Text slotLabel = new Text(x - 35, bottomY + 220, "Slot " + i);
            slotLabel.setFont(Font.font("Arial", FontWeight.BOLD, 12));
            slotLabel.setFill(Color.BLACK);
            gamePane.getChildren().add(slotLabel);
        }

        // Create user input controls
        Text enterLabel = new Text("Enter a number between 1 and 100");
        enterLabel.setFont(Font.font("Arial", FontWeight.BOLD, 16));
        enterLabel.setFill(Color.DARKBLUE);

        TextField numBallsField = new TextField();
        numBallsField.setPromptText("Balls");
        numBallsField.setPrefWidth(80);
        numBallsField.setStyle("-fx-background-color: white; -fx-text-fill: darkblue; -fx-font-size: 14px;");

        Button startGameButton = new Button("Start Game");
        startGameButton.setFont(Font.font("Verdana", FontWeight.BOLD, 16));
        startGameButton.setStyle("-fx-background-color: darkblue; -fx-text-fill: white;");

        VBox controls = new VBox(10, enterLabel, numBallsField, startGameButton);
        controls.setAlignment(Pos.CENTER);

        // Output display
        VBox outputBox = new VBox(10);
        outputBox.setLayoutX(MACHINE_WIDTH + 50);
        outputBox.setLayoutY(50);

        // Layout container
        HBox container = new HBox(20, gamePane, outputBox);
        VBox root = new VBox(20, controls, container);
        root.setAlignment(Pos.CENTER);

        // Set background gradient color
        Stop[] stops = new Stop[] {
                new Stop(0, Color.LIGHTBLUE),
                new Stop(1, Color.LIGHTSTEELBLUE)
        };
        LinearGradient gradient = new LinearGradient(0, 0, 1, 1, true, null, stops);
        root.setBackground(new Background(new BackgroundFill(gradient, null, null)));

        // Simulate ball dropping
        startGameButton.setOnAction(event -> {
            try {
                int numBalls = Integer.parseInt(numBallsField.getText());
                if (numBalls < 1 || numBalls > 100) {
                    outputBox.getChildren().clear();
                    Text errorText = new Text("Enter a number between 1 and 100.");
                    errorText.setFont(Font.font("Arial", FontWeight.BOLD, 14));
                    errorText.setFill(Color.RED);
                    outputBox.getChildren().add(errorText);
                    return;
                }

                // Clear output and slots
                outputBox.getChildren().clear();
                for (int i = 0; i < slots.length; i++) {
                    slots[i] = 0;
                }

                // Drop balls sequentially
                new Thread(() -> {
                    for (int i = 0; i < numBalls; i++) {
                        final int ballIndex = i;
                        javafx.application.Platform.runLater(() -> dropBall(gamePane, centerX, startY, ROWS, SLOT_WIDTH,
                                bottomY, slots, ballIndex, outputBox));
                        try {
                            Thread.sleep(400); // Adjusted delay for better visibility
                        } catch (InterruptedException e) {
                            e.printStackTrace();
                        }
                    }
                }).start();
            } catch (NumberFormatException e) {
                e.printStackTrace();
            }
        });

        Scene scene = new Scene(root, MACHINE_WIDTH + 500, MACHINE_HEIGHT + 300);
        primaryStage.setTitle("Corrected Bean Machine");
        primaryStage.setScene(scene);
        primaryStage.setResizable(true); // Allow customizable size
        primaryStage.show();
    }

    private synchronized void dropBall(Pane pane, double startX, double startY, int rows, double slotWidth,
            double bottomY, int[] slots, int ballIndex, VBox outputBox) {
        Circle ball = new Circle(startX, startY, BALL_RADIUS);
        ball.setFill(Color.BLUE);
        pane.getChildren().add(ball);

        Polyline path = new Polyline();
        path.getPoints().addAll(startX, startY);

        Random random = new Random();
        double[] currentX = { startX };
        double currentY = startY;
        int[] slotIndex = { 0 }; // Mutable holder for slotIndex

        // Simulate ball path through pegs
        for (int i = 0; i < rows; i++) {
            currentY += 30; // Move ball vertically
            if (random.nextBoolean()) {
                currentX[0] += slotWidth / 2;
                slotIndex[0]++;
            } else {
                currentX[0] -= slotWidth / 2;
            }
            path.getPoints().addAll(currentX[0], currentY);
        }

        // Ensure the ball lands in the correct slot
        slotIndex[0] = Math.max(0, Math.min(slots.length - 1, slotIndex[0]));

        // Adjusting the final ball position
        double finalX = startX - (rows * slotWidth / 2.0) + slotIndex[0] * slotWidth;
        double slotsUsedHeight = slots[slotIndex[0]] * (2 * BALL_RADIUS + 5);
        double remainingHeight = 200 - slotsUsedHeight;
        double finalY = bottomY - slotsUsedHeight - remainingHeight / 2;

        path.getPoints().addAll(finalX, finalY);

        // Animate the ball falling
        PathTransition pathTransition = new PathTransition();
        pathTransition.setNode(ball);
        pathTransition.setPath(path);
        pathTransition.setDuration(Duration.seconds(3));
        pathTransition.setOnFinished(e -> {
            ball.setCenterX(finalX);
            ball.setCenterY(finalY);

            // Increment slot count AFTER animation finishes
            slots[slotIndex[0]]++;

            // Update the output display
            outputBox.getChildren().clear();
            for (int i = 0; i < slots.length; i++) {
                Text slotDisplay = new Text("Slot " + i + ": " + slots[i] + " balls");
                slotDisplay.setFont(Font.font("Courier New", FontWeight.BOLD, 16));
                slotDisplay.setFill(Color.DARKBLUE);
                outputBox.getChildren().add(slotDisplay);
            }
        });
        pathTransition.play();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
