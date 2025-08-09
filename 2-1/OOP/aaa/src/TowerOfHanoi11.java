
/*
 * Tower of Hanoi
 * Ex: Case Study - 18.7
 * Developed by PRINCE
 * ID: 12105007
 */

package application;

import javafx.animation.PathTransition;
import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.ButtonType;
import javafx.scene.control.DialogPane;
import javafx.scene.control.TextField;
import javafx.scene.control.TextInputDialog;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;
import javafx.scene.shape.Ellipse;
import javafx.scene.shape.Line;
import javafx.scene.text.Text;
import javafx.stage.Stage;
import javafx.util.Duration;
import javafx.scene.shape.Rectangle;

import java.util.Optional;
import java.util.Stack;

public class TowerOfHanoi11 extends Application {
    private int numDisks; // Number of disks, set dynamically by user
    private static final int ROD_SPACING = 300;
    private static final int BASE_ROD_X = 200; // Increased left space for the source rod
    private static final int ROD_HEIGHT = 400;

    private Stack<Ellipse>[] rods = new Stack[3];
    private Pane root = new Pane();
    private Text stepLabel;
    private int stepCount = 1;

    @Override
    /**************
     * Main Window
     **************/
    public void start(Stage primaryStage) {
        // Ask user for the number of disks
        TextInputDialog inputDialog = new TextInputDialog("4");
        inputDialog.setTitle("Tower of Hanoi | Developed by PRINCE");

        // Set dialog background to a light linear gradient
        DialogPane dialogPane = inputDialog.getDialogPane();
        dialogPane.setStyle("-fx-background-color: linear-gradient(to bottom, #e0f7fa, #b2ebf2);");

        // Customize header text and content text font and size
        inputDialog.setHeaderText("Enter the number of disks:");
        inputDialog.setContentText("Number of disks:");
        dialogPane.lookup(".header-panel")
                .setStyle("-fx-font-size: 22px; -fx-font-weight: bold; -fx-text-fill: #00796b;"); // Header text style
        dialogPane.lookup(".content").setStyle("-fx-font-size: 16px; -fx-text-fill: #004d40;"); // Content text style

        // Style the TextField inside the dialog
        TextField textField = (TextField) dialogPane.lookup(".text-field");
        textField.setStyle(
                "-fx-background-color: #351804; -fx-text-fill: WHITE; -fx-font-size: 20px; -fx-border-radius: 5px; -fx-background-radius: 5px;");

        // Customize buttons (e.g., OK and Cancel)
        Button okButton = (Button) dialogPane.lookupButton(ButtonType.OK);
        okButton.setStyle(
                "-fx-background-color: darkgreen; -fx-text-fill: white; -fx-font-size: 20px; -fx-font-weight: bold; -fx-border-radius: 5px; -fx-background-radius: 5px;");

        Button cancelButton = (Button) dialogPane.lookupButton(ButtonType.CANCEL);
        cancelButton.setStyle(
                "-fx-background-color: #f44336; -fx-text-fill: white; -fx-font-size: 20px; -fx-font-weight: bold; -fx-border-radius: 5px; -fx-background-radius: 5px;");

        // Get user input
        Optional<String> result = inputDialog.showAndWait();
        numDisks = result.map(Integer::parseInt).orElse(4);

        /*
         * Check if the user clicked OK and provided valid input
         * Ok or Close Button
         */
        if (!result.isPresent() || result.get().trim().isEmpty()) {
            // If no input was given (Cancel or closed), exit the application
            // System.out.println("Game setup was canceled.");
            primaryStage.close();
            return;
        }

        /*
         * Validate input for numeric values
         * alert show for wrong input
         */
        try {
            numDisks = Integer.parseInt(result.get().trim());
            if (numDisks <= 0)
                throw new NumberFormatException("Disks must be greater than zero.");
        } catch (NumberFormatException e) {
            // Show an error alert if the input is invalid
            Alert alert = new Alert(Alert.AlertType.ERROR);
            alert.setTitle("Invalid Input");
            alert.setHeaderText("Error");
            alert.setContentText("Please enter a valid positive integer for the number of disks.");

            // Customize the alert dialog
            DialogPane dialogPane1 = alert.getDialogPane();
            dialogPane1.setStyle("-fx-background-color: linear-gradient(to bottom, #fbe9e7, #ffccbc);");
            dialogPane1.lookup(".header-panel")
                    .setStyle("-fx-font-size: 18px; -fx-font-weight: bold; -fx-text-fill: black;");
            dialogPane1.lookup(".content").setStyle("-fx-font-size: 16px; -fx-text-fill: black;");

            // Show the alert and wait for user acknowledgment
            alert.showAndWait();

            // Restart the input dialog after closing the alert
            start(primaryStage);
            return;
        }

        /*
         * Set up the root pane and background
         * main disk window background
         */
        root.setStyle("-fx-background-color: linear-gradient(to bottom, lightgray, #cfdef3);");

        /*
         * Initialize rods with increased spacing
         * creates rods in a specific distance
         */
        for (int i = 0; i < 3; i++) {
            rods[i] = new Stack<>();
            double x = BASE_ROD_X + i * ROD_SPACING;
            root.getChildren().add(createRod(x));
        }

        // Add rod labels with more distance
        root.getChildren().add(createRodLabel(BASE_ROD_X - 50, "Source"));
        root.getChildren().add(createRodLabel(BASE_ROD_X + ROD_SPACING - 50, "Helper"));
        root.getChildren().add(createRodLabel(BASE_ROD_X + 2 * ROD_SPACING - 50, "Destination"));

        // Initialize disks
        for (int i = numDisks; i >= 1; i--) {
            Ellipse disk = createDisk(i);
            rods[0].push(disk); // Add disk to the first rod stack
            disk.setTranslateX(BASE_ROD_X); // Horizontal position on the first rod
            disk.setTranslateY(650 - (numDisks - i) * 30); // Vertical position aligned to the rod bottom
            root.getChildren().add(disk); // Add the disk to the scene
        }

        // Add step label
        stepLabel = new Text(200, 50, "Step: ");
        stepLabel.setFill(Color.BLUE); // Correct way to set the text color
        stepLabel.setStyle("-fx-font-size: 22px; -fx-font-weight: bold;"); // Style other properties
        root.getChildren().add(stepLabel);

        // Add Run Again button
        Button runAgainButton = new Button("Run Again");

        // Modify button position
        runAgainButton.setLayoutX(450); // Set custom X position
        runAgainButton.setLayoutY(750); // Set custom Y position

        // Modify button style
        runAgainButton.setStyle(
                "-fx-background-color: darkgreen; " + // Green fill color
                        "-fx-text-fill: white; " + // White text color
                        "-fx-font-size: 20px; " + // Font size
                        "-fx-font-weight: bold; " + // Font weight
                        "-fx-border-radius: 10px; " + // Rounded border
                        "-fx-background-radius: 10px;" // Rounded background
        );

        // Add action to restart animation
        runAgainButton.setOnAction(e -> restartAnimation());

        // Add button to the root pane
        root.getChildren().add(runAgainButton);

        // Start Tower of Hanoi animation
        new Thread(() -> towerOfHanoi(numDisks, 0, 1, 2)).start();

        // Set up scene and stage
        Scene scene = new Scene(root, 1050, 800); // Increased width for more space
        primaryStage.setScene(scene);
        primaryStage.setTitle("Tower of Hanoi Visualizer - Updated");
        primaryStage.show();
    }

    /************************
     * Create Tower Section
     ************************/
    private Rectangle createRod(double x) {
        double rodBottom = 650; // Bottom of the window
        double rodTop = rodBottom - ROD_HEIGHT; // Top of the rod
        double rodWidth = 15; // Width of the rod
        Rectangle rod = new Rectangle(x - rodWidth / 2, rodTop, rodWidth, ROD_HEIGHT); // Create a rectangle rod
        rod.setFill(Color.BROWN); // Fill color
        rod.setArcWidth(10); // Rounded corners (width)
        rod.setArcHeight(10); // Rounded corners (height)
        return rod;
    }

    /***************
     * Tower Levels
     * Source
     * Helper
     * Destination
     ***************/
    private Text createRodLabel(double x, String label) {
        Text text = new Text(label);
        text.setX(x + 18); // Custom offset for X-axis (adjust as needed)
        text.setY(ROD_HEIGHT + 320); // Set Y-axis position below the rod
        text.setFill(Color.BLUE); // Set text color to blue
        text.setStyle("-fx-font-size: 22px; -fx-font-weight: bold;"); // Increase font size and make it bold
        return text;
    }

    /*******************************
     * Create Disk in Ellipse Shape
     *******************************/
    private Ellipse createDisk(int size) {
        double radiusX = 40 + size * 10; // Average disk size
        double radiusY = 15 + size * 2;
        Ellipse disk = new Ellipse(radiusX, radiusY);

        // Define a set of distinct colors for disks
        Color[] colors = {
                Color.GOLDENROD, // 1st disk
                Color.LIMEGREEN, // 2nd disk
                Color.LIGHTBLUE, // 3rd disk
                Color.CYAN, // 4th disk
                Color.PURPLE, // 5th disk
                Color.WHITE, // 6th disk
                Color.YELLOW, // 7th disk
                Color.ORANGE// 8th disk
        };

        // Choose a color from the array based on the disk size
        disk.setFill(colors[(size - 1) % colors.length]); // Cycle through colors if more disks than colors
        disk.setStroke(Color.BLACK);
        disk.setStrokeWidth(2);

        return disk;
    }

    /*****************
     * Move Disk Part
     *****************/
    private void moveDisk(int from, int to) {
        Ellipse disk = rods[from].pop(); // Remove disk from the source rod
        rods[to].push(disk); // Add disk to the destination rod

        // Animate disk movement
        double startX = disk.getTranslateX();
        double startY = disk.getTranslateY();
        double endX = BASE_ROD_X + to * ROD_SPACING;
        double endY = 650 - rods[to].size() * 30; // Calculate Y position based on the stack size

        // Breaking movement into three parts: lifting, moving horizontally, and
        // lowering
        Line liftPath = new Line(startX, startY, startX, 200); // Lift up to a safe height
        Line horizontalPath = new Line(startX, 200, endX, 200); // Move horizontally to the destination rod
        Line lowerPath = new Line(endX, 200, endX, endY); // Lower down to the calculated position

        // Path transitions for the animations
        PathTransition liftTransition = new PathTransition(Duration.seconds(1.5), liftPath, disk); // Lift
        PathTransition horizontalTransition = new PathTransition(Duration.seconds(1.5), horizontalPath, disk); // Horizontal
                                                                                                               // move
        PathTransition lowerTransition = new PathTransition(Duration.seconds(1.5), lowerPath, disk); // Lower

        // Sequentially play the animations
        liftTransition.setOnFinished(e -> horizontalTransition.play());
        horizontalTransition.setOnFinished(e -> lowerTransition.play());
        lowerTransition.setOnFinished(e -> {
            disk.setTranslateX(endX); // Final X position
            disk.setTranslateY(endY); // Final Y position
            updateStepLabel(from, to); // Update step label
        });

        liftTransition.play();

        // Pause to synchronize steps (optional, based on threading)
        try {
            Thread.sleep(5000); // Total time for lift, move, and lower animations
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    /*****************************
     * Step Count & Print Section
     *****************************/
    private void updateStepLabel(int from, int to) {
        String[] rodNames = { "Source", "Helper", "Destination" };
        stepLabel.setText("Step " + stepCount++ + ": " + rodNames[from] + " to " + rodNames[to]);
    }

    /*****************
     * Recursive Call
     *****************/
    private void towerOfHanoi(int n, int src, int helper, int dest) {
        if (n == 1) {
            moveDisk(src, dest);
            return;
        }
        towerOfHanoi(n - 1, src, dest, helper);
        moveDisk(src, dest);
        towerOfHanoi(n - 1, helper, src, dest);
    }

    /********************
     * Animation Section
     ********************/
    private void restartAnimation() {
        // Clear rods and reset the root Pane
        root.getChildren().clear();
        for (int i = 0; i < 3; i++) {
            rods[i].clear(); // Clear each rod's stack
        }
        stepCount = 1;
        start(new Stage());
    }

    /****************
     * Main Function
     ***************/
    public static void main(String[] args) {
        launch(args);
    }
}