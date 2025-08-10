package application;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.layout.GridPane;
import javafx.scene.layout.VBox;
import javafx.scene.paint.Color;
import javafx.scene.effect.DropShadow;
import javafx.stage.Stage;
import javafx.geometry.Pos;
import javafx.geometry.Insets;

import java.util.Random;
import java.util.Stack;

public class Main extends Application {
    // Variables for the current player, game buttons, game mode, and move history
    private String currentPlayer = "❌";
    private Button[][] buttons = new Button[3][3];
    private boolean isPlayerVsComputer = false; // Indicates whether the game is against the computer
    private Random random = new Random(); // Random generator for computer moves
    private Stack<int[]> moveHistory = new Stack<>(); // Stores the history of moves for the undo functionality

    @Override
    public void start(Stage primaryStage) {
        // Set the window title and show the start menu
    	primaryStage.setTitle("Tic Tac Toe | Developed by PRINCE");  // Use of | as a separator

        VBox menu = createStartMenu(primaryStage);
        Scene scene = new Scene(menu, 450, 500);
        primaryStage.setScene(scene);
        primaryStage.show();
    }

    private VBox createStartMenu(Stage primaryStage) {
        // Create labels and buttons for the start menu
        Label chooseModeLabel = new Label("Choose Game Mode");
        chooseModeLabel.setStyle("-fx-font-size: 40px; -fx-font-weight: bold; -fx-text-fill: white;");
        //Label chooseModeLabel1 = new Label("prince");
        //chooseModeLabel1.setStyle("-fx-font-size: 40px; -fx-font-weight: bold; -fx-text-fill: white;");

        Button pvpButton = new Button("Player vs Player");
        pvpButton.setStyle("-fx-font-size: 44px; -fx-font-weight: bold; -fx-background-color: #4CAF50; -fx-text-fill: white;");
        pvpButton.setOnAction(e -> startGame(primaryStage, false));

        Button pvcButton = new Button("Player vs Computer");
        pvcButton.setStyle("-fx-font-size: 38px; -fx-font-weight: bold; -fx-background-color: #2196F3; -fx-text-fill: white;");
        pvcButton.setOnAction(e -> startGame(primaryStage, true));

        // VBox layout for holding the labels and buttons
        VBox menu = new VBox(70, chooseModeLabel, pvpButton, pvcButton);
        menu.setAlignment(Pos.CENTER);
        
        menu.setStyle("-fx-background-color: linear-gradient(to bottom right, #0B486B, #F56217);");
        return menu;
    }

    private void startGame(Stage primaryStage, boolean playerVsComputer) {
        // Setup the game grid and controls based on selected mode
        isPlayerVsComputer = playerVsComputer;
        currentPlayer = "❌";
        Label modeLabel = new Label(isPlayerVsComputer ? "Player vs Computer" : "Player vs Player");
        modeLabel.setStyle("-fx-font-size: 14px; -fx-text-fill: white;");
        GridPane grid = createGameGrid();
        Button undoButton = new Button("Undo");
        undoButton.setStyle("-fx-font-size: 14px; -fx-background-color: #FF1744; -fx-text-fill: white;");
        undoButton.setOnAction(e -> undoLastMove());
        VBox root = new VBox(10, modeLabel, grid, undoButton);
        root.setAlignment(Pos.CENTER);
        Scene scene = new Scene(root, 450, 500);
        primaryStage.setScene(scene);
    }

    private GridPane createGameGrid() {
        // Initialize the game grid with buttons
        GridPane grid = new GridPane();
        grid.setAlignment(Pos.CENTER);
        grid.setVgap(10);
        grid.setHgap(10);
        grid.setPadding(new Insets(20));
        grid.setStyle("-fx-background-color: linear-gradient(to bottom right, #0f2027, #203a43, #2c5364); -fx-effect: dropshadow(three-pass-box, rgba(0,0,0,0.8), 10, 0, 0, 10);");
        DropShadow neonEffectX = new DropShadow(20, Color.RED);
        DropShadow neonEffectO = new DropShadow(20, Color.CYAN);
        for (int row = 0; row < 3; row++) {
            for (int col = 0; col < 3; col++) {
                Button button = new Button("");
                button.setMinSize(120, 120);
                button.setStyle("-fx-font-size: 40px; -fx-font-weight: bold; -fx-text-fill: #000000;");
                int r = row, c = col;
                button.setOnAction(e -> handleButtonPress(button, r, c, neonEffectX, neonEffectO));
                buttons[row][col] = button;
                grid.add(button, col, row);
            }
        }
        return grid;
    }

    private void handleButtonPress(Button button, int row, int col, DropShadow neonEffectX, DropShadow neonEffectO) {
        // Handle button presses during the game
        if (button.getText().isEmpty()) {
            button.setText(currentPlayer);
            if (currentPlayer.equals("❌")) {
                button.setStyle("-fx-font-size: 40px; -fx-font-weight: bold; -fx-text-fill: #FF0000;");
                button.setEffect(neonEffectX);
            } else {
                button.setStyle("-fx-font-size: 40px; -fx-font-weight: bold; -fx-text-fill: #0000FF;");
                button.setEffect(neonEffectO);
            }
            moveHistory.push(new int[]{row, col});
            if (checkWin()) {
                showAlert("Player " + currentPlayer + " wins!");
                resetBoard();
            } else if (isBoardFull()) {
                showAlert("It's a draw!");
                resetBoard();
            } else {
                switchPlayer();
            }
        }
    }

    private boolean checkWin() {
        // Check for winning conditions on the board
        for (int i = 0; i < 3; i++) {
            if (!buttons[i][0].getText().isEmpty() &&
                buttons[i][0].getText().equals(buttons[i][1].getText()) &&
                buttons[i][1].getText().equals(buttons[i][2].getText())) {
                return true;
            }
            if (!buttons[0][i].getText().isEmpty() &&
                buttons[0][i].getText().equals(buttons[1][i].getText()) &&
                buttons[1][i].getText().equals(buttons[2][i].getText())) {
                return true;
            }
        }
        if (!buttons[0][0].getText().isEmpty() &&
            buttons[0][0].getText().equals(buttons[1][1].getText()) &&
            buttons[1][1].getText().equals(buttons[2][2].getText())) {
            return true;
        }
        if (!buttons[0][2].getText().isEmpty() &&
            buttons[0][2].getText().equals(buttons[1][1].getText()) &&
            buttons[1][1].getText().equals(buttons[2][0].getText())) {
            return true;
        }
        return false;
    }

    private boolean isBoardFull() {
        // Check if all board spaces are filled
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (buttons[i][j].getText().isEmpty()) {
                    return false;
                }
            }
        }
        return true;
    }

    private void resetBoard() {
        // Reset the board to start a new game
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                buttons[i][j].setText("");
                buttons[i][j].setEffect(null);
            }
        }
        currentPlayer = "❌";
        moveHistory.clear();
    }

    private void switchPlayer() {
        // Switch the current player and check for computer's turn
        currentPlayer = currentPlayer.equals("❌") ? "⭕" : "❌";
        if (isPlayerVsComputer && currentPlayer.equals("⭕")) {
            computerMove();
        }
    }

    private void computerMove() {
        // Simulate a computer move
        int row, col;
        do {
            row = random.nextInt(3);
            col = random.nextInt(3);
        } while (!buttons[row][col].getText().isEmpty());
        handleButtonPress(buttons[row][col], row, col, null, new DropShadow(20, Color.CYAN));
    }

    private void undoLastMove() {
        // Undo the last move
        if (!moveHistory.isEmpty()) {
            int[] lastMove = moveHistory.pop();
            Button lastButton = buttons[lastMove[0]][lastMove[1]];
            lastButton.setText("");
            lastButton.setEffect(null);
            switchPlayer();
        }
    }

    private void showAlert(String message) {
        Alert alert = new Alert(AlertType.INFORMATION);
        alert.setTitle("Game Over");
        alert.setHeaderText(null);
        alert.setContentText(message);

        // Create a label for the content to ensure styling is applied
        Label contentLabel = new Label(message);
        if (message.contains("wins")) {
            // Determine the color based on the winner
            String color = message.contains("❌") ? "#FF0000" : "#0000FF"; // Red for ❌, Blue for ⭕
            contentLabel.setStyle("-fx-font-size: 20px; -fx-font-weight: bold; -fx-text-fill: " + color + ";");
        } else {
            contentLabel.setStyle("-fx-font-size: 20px; -fx-font-weight: bold; -fx-text-fill: #666666;"); // Dark grey for draw
        }
        alert.getDialogPane().setContent(contentLabel); // Set the customized label as the content of the alert

        alert.showAndWait();
    }



    public static void main(String[] args) {
        launch(args);
    }
}
