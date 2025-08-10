/*
 * Tic Tac Toe
 * Developed by PRINCE
 */

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
     /*
      * Create Some private type Variables
      */
     
     // Variables for the current player, game buttons, game mode, and move history
     private String currentPlayer = "❌";
     
     private Button[][] buttons = new Button[3][3];
     //3 x 3 grid buttons array to store value
     
     private boolean isPlayerVsComputer = false; 
     // Indicates whether the game is against the computer
     
     private Random random = new Random(); 
     // Random generator for computer moves
     
     /*
      * Use stack cause stack is use LIFO method
      * When use undo button then delete the last operation
      */
     private Stack<int[]> moveHistory = new Stack<>(); 
     // Stores the history of moves for the undo functionality
 
     @Override
     //Primary Title
     public void start(Stage primaryStage) {
         // Set the window title and show the start menu
         primaryStage.setTitle("Tic Tac Toe | Developed by PRINCE");  
         // Use of | as a separator
 
         VBox menu = createStartMenu(primaryStage);
         
         //first dialogue box width and height 
         Scene scene = new Scene(menu, 450, 450);
         
         primaryStage.setScene(scene);
         primaryStage.show();
     }
     
     /*
      * First Dialogue Box
      */
 
     private VBox createStartMenu(Stage primaryStage) {
         
         // Create labels and buttons for the start menu
         Label chooseModeLabel = new Label("Choose Game Mode");
         chooseModeLabel.setStyle("-fx-font-size: 40px;"
                 + " -fx-font-weight: bold; -fx-text-fill: white;");
         //Label chooseModeLabel1 = new Label("prince");
         //chooseModeLabel1.setStyle("-fx-font-size: 40px;
         //-fx-font-weight: bold; -fx-text-fill: white;");
 
         Button pvpButton = new Button("Player vs Player");
         pvpButton.setStyle("-fx-font-size: 44px;"
                 + " -fx-font-weight: bold; -fx-background-color: #4CAF50;"
                 + " -fx-text-fill: white;");
         pvpButton.setOnAction(e -> startGame(primaryStage, false));
 
         Button pvcButton = new Button("Player vs Computer");
         pvcButton.setStyle("-fx-font-size: 38px; -fx-font-weight: bold;"
                 + " -fx-background-color: #2196F3; -fx-text-fill: white;");
         pvcButton.setOnAction(e -> startGame(primaryStage, true));
 
         // VBox layout for holding the labels and buttons
         //70 means button lines gap means vertical gap
         VBox menu = new VBox(70, chooseModeLabel, pvpButton, pvcButton);
         menu.setAlignment(Pos.CENTER);
         //set position at center
         
         //first dialogue box bg color
         menu.setStyle("-fx-background-color: linear-gradient(to bottom right, #0B486B, #F56217);");
         return menu;
     }
     
     /*
      * First Dialogue Box
      */
 
 
     private void startGame(Stage primaryStage, boolean playerVsComputer) {
         
         // Setup the game grid and controls based on selected mode
         isPlayerVsComputer = playerVsComputer;
         currentPlayer = "❌";
         //start with player X
         
         //here use ternary operator instead of if else condition
         //Label modeLabel = new Label(isPlayerVsComputer ? "Player vs Computer" : "Player vs Player");
         
         //use if-else condition for better understand
         Label modeLabel;
         if (isPlayerVsComputer) {
             modeLabel = new Label("Player vs Computer");
         } else {
             modeLabel = new Label("Player vs Player");
         }
         
         /*
          * In Game Mode at Top Position Show Currently Which mode is use
          */
         modeLabel.setStyle("-fx-font-size: 20px; -fx-text-fill: blue;");
         
         //create object for grid
         GridPane grid = createGameGrid();
         
         //undo button style
         Button undoButton = new Button("Undo");
         undoButton.setStyle("-fx-font-size: 17px;"
                 + " -fx-background-color: #FF1744;"
                 + " -fx-text-fill: white;");
         
         /*
          * Here use lambda function
          * Lambda function is directly access to the register
          */
         undoButton.setOnAction(e -> undoLastMove());
         
         //9 means indention where distance from grid
         VBox root = new VBox(9, modeLabel, grid, undoButton);
         root.setAlignment(Pos.CENTER);
         
         /*
          * Second dialogue box dimension
          * width x height
          */
         Scene scene = new Scene(root, 450, 520);
         primaryStage.setScene(scene);
     }
     
     /*
      * Second Dialogue Box
      */
 
     private GridPane createGameGrid() {
         // Initialize the game grid with buttons
         GridPane grid = new GridPane();
         grid.setAlignment(Pos.CENTER);
         grid.setVgap(10);//Vertical gap
         grid.setHgap(10);//Horizontal gap
         grid.setPadding(new Insets(20));//padding of grid
         
         //grid background
         grid.setStyle("-fx-background-color: linear-gradient"
                 + "(to bottom right, #0f2027, #203a43, #2c5364);"
                 + " -fx-effect: dropshadow(three-pass-box, rgba(0,0,0,0.8), 10, 0, 0, 10);");
         
         //use shadow for two player X & O
         DropShadow neonEffectX = new DropShadow(20, Color.RED);
         DropShadow neonEffectO = new DropShadow(20, Color.CYAN);
         
         //fill up the grid
         for (int row = 0; row < 3; row++) {
             for (int col = 0; col < 3; col++) {
                 Button button = new Button("");
                 //create total 9 buttons
                 
                 button.setMinSize(120, 120);
                 //set every button dimension
                 
                 button.setStyle("-fx-font-size: 40px;"
                         + " -fx-font-weight: bold; -fx-text-fill: #000000;");
                 int r = row, c = col;
                 
                 //set lambda function when click any button then show effects
                 button.setOnAction(e -> handleButtonPress(button, r, c, neonEffectX, neonEffectO));
                 
                 //store value in specific array
                 buttons[row][col] = button;
                 
                 //in grid add button, col and row perfectly
                 grid.add(button, col, row);
             }
         }
         
         //return grid to check where i can move
         return grid;
     }
     
     /*
      * Second Dialogue Box
      */
     private void handleButtonPress(Button button, int row, int col, 
             DropShadow neonEffectX, DropShadow neonEffectO) {
         
             // Handle button presses during the game
         if (button.getText().isEmpty()) {
             button.setText(currentPlayer);
             if (currentPlayer.equals("❌")) {
                 button.setStyle("-fx-font-size: 40px;"
                         + " -fx-font-weight: bold;"
                         + " -fx-text-fill: #FF0000;");
                 button.setEffect(neonEffectX);
             } else {
                 button.setStyle("-fx-font-size: 40px;"
                         + " -fx-font-weight: bold;"
                         + " -fx-text-fill: #0000FF;");
                 button.setEffect(neonEffectO);
             }
             
             /*
              * Check my next movement where can i press
              */
             moveHistory.push(new int[]{row, col});
             
             //if win
             if (checkWin()) {
                 showAlert("Player " + currentPlayer + " wins!");
                 resetBoard();
                 //when click ok then reset the board
                 
             } else if (isBoardFull()) {
                 showAlert("It's a draw!");
                 resetBoard();
               //when click ok then reset the board
                 
             } else {
                 switchPlayer();
                 //give another player change to press button
             }
         }
     }
     
     /*
      * Second Dialogue Box
      */
 
     private boolean checkWin() {
         // Check for winning conditions on the board
         for (int i = 0; i < 3; i++) {
             
             //check every row
             if (!buttons[i][0].getText().isEmpty() &&
                 buttons[i][0].getText().equals(buttons[i][1].getText()) &&
                 buttons[i][1].getText().equals(buttons[i][2].getText())) {
                 return true;
             }
             
             //check every columns
             if (!buttons[0][i].getText().isEmpty() &&
                 buttons[0][i].getText().equals(buttons[1][i].getText()) &&
                 buttons[1][i].getText().equals(buttons[2][i].getText())) {
                 return true;
             }
         }
         
         //check diagonal
         if (!buttons[0][0].getText().isEmpty() &&
             buttons[0][0].getText().equals(buttons[1][1].getText()) &&
             buttons[1][1].getText().equals(buttons[2][2].getText())) {
             return true;
         }
         
         //check anti diagonal
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
                     //that means it is draw
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
         
         //after resetting board start with player X
         currentPlayer = "❌";
         moveHistory.clear();
     }
 
     private void switchPlayer() {
         // Switch the current player and check for computer's turn
         if (currentPlayer.equals("❌")) {
             currentPlayer = "⭕";
         } else {
             currentPlayer = "❌";
         }
 
         if (isPlayerVsComputer && currentPlayer.equals("⭕")) {
             computerMove();
         }
     }
     
     /*
      * Computer Move
      */
     private void computerMove() {
         // Simulate a computer move
         int row, col;
         do {
             row = random.nextInt(3);
             //random row
             col = random.nextInt(3);
             //random columns
         } while (!buttons[row][col].getText().isEmpty());
         handleButtonPress(buttons[row][col], row, col, null, new DropShadow(20, Color.CYAN));
         //when that index is empty then press that random button
     }
 
     private void undoLastMove() {
         // Undo the last move
         
         //if there is no history that means game not started yet
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
             String color = message.contains("❌") ? "#FF0000" : "#0000FF"; 
             // Red for ❌
             
             //Blue for ⭕
             contentLabel.setStyle("-fx-font-size: 20px;"
                     + " -fx-font-weight: bold; -fx-text-fill: "
                     + color + ";");
         } else {
             contentLabel.setStyle("-fx-font-size: 20px;"
                     + " -fx-font-weight: bold;"
                     + " -fx-text-fill: #666666;");
             // Dark grey for draw
         }
         alert.getDialogPane().setContent(contentLabel); 
         // Set the customized label as the content of the alert
 
         alert.showAndWait();
     }
 
     
     /*
      * Main Function
      */
     public static void main(String[] args) {
         launch(args);
     }
 
}
 