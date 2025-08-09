/************************************
 * Galton Game | Bean Machine Game
 * Exercise: 7.21, 14.29, 15.33
 * Language: JavaFx
 * Developed: Md. An Nahian Prince
 * ID: 12105007
 ************************************/

 package application;

 import javafx.animation.PauseTransition;
 import javafx.animation.TranslateTransition;
 import javafx.application.Application;
 import javafx.scene.Scene;
 import javafx.scene.control.Button;
 import javafx.scene.control.Label;
 import javafx.scene.control.TextField;
 import javafx.scene.layout.*;
 import javafx.scene.paint.Color;
 import javafx.scene.shape.Circle;
 import javafx.scene.shape.Line;
 import javafx.scene.shape.Rectangle;
 import javafx.stage.Stage;
 import javafx.util.Duration;
 
 import java.util.Random;
 
 public class BeanMachine6 extends Application {
 
     private static final int BALL_RADIUS = 10;
     private static final int PINS = 7;
     private static final int SLOT_WIDTH = 80; // Adjust slot width here
     private static final int SLOT_COUNT = PINS; // Total slots (0 to 6)
     private int[] slots = new int[SLOT_COUNT];
     private Label[] slotLabels = new Label[SLOT_COUNT];
     private int ballCount = 10; // Default number of balls
 
     @Override
     
     
     /********************
      * Start Menu Window
      ********************/
     public void start(Stage primaryStage) {
         Pane pane = new Pane();
         VBox controlBox = new VBox(10); // VBox for user input
         VBox slotInfoBox = new VBox(10); // VBox to display slot info
         controlBox.setLayoutX(20); // Position the input box on the left
         controlBox.setLayoutY(20);
         slotInfoBox.setLayoutX(700); // Position the slot info on the right
         slotInfoBox.setLayoutY(100);
 
 
         // User input for the number of balls
         TextField ballInputField = new TextField();
         ballInputField.setPromptText("Enter number of balls here:");
         ballInputField.setStyle(
                 "-fx-background-color: lightblue;" +
                 "-fx-text-fill: black;" +  // This ensures the entered text is black
                 "-fx-prompt-text-fill: blue;" +
                 "-fx-font-family: 'Arital Rounded MT Bold'; " + 
                 "-fx-font-size: 16px;" +
                 "-fx-font-weight: bold;"
             );
         
         ballInputField.setPrefWidth(222); 
         // Adjust the width to fit longer text
         //text field width
 
         //start game button
         Button startButton = new Button("Start Game");
         startButton.setStyle("-fx-background-color: darkgreen; " +
                              "-fx-text-fill: white; " +
                              "-fx-font-family: 'Arital Rounded MT Bold'; " +
                              "-fx-font-size: 18px; " +
                              "-fx-font-weight: bold;");
 
         controlBox.getChildren().addAll(new Label("Galton Game | Developed by PRINCE"), ballInputField, startButton);
 
      // Initialize slot labels with updated style
         for (int i = 0; i < SLOT_COUNT; i++) {
             slotLabels[i] = new Label("Slot " + i + ": 0 balls");
             slotLabels[i].setStyle(
                 "-fx-text-fill: blue;" +       // Change text color to blue
                 "-fx-font-size: 20px;" +      // Set font size to 20px
                 "-fx-font-family: 'Verdana';" + // Set font to Verdana or any other font
                 "-fx-font-weight: bold;"      // Make the text bold
             );
             slotInfoBox.getChildren().add(slotLabels[i]);
         }
 
 
         // Draw the machine
         drawMachine(pane);
 
         startButton.setOnAction(e -> {
             // Reset slots and remove balls only
             pane.getChildren().removeIf(node -> node instanceof Circle && "ball".equals(node.getId()));
             for (int i = 0; i < SLOT_COUNT; i++) {
                 slots[i] = 0;
                 slotLabels[i].setText("Slot " + i + ": 0 balls");
             }
 
             // Parse the user input
             try {
                 /*
                  * parseInt is a build in java function that convert string to integer
                  * text field input as string format so need to convert in integer format
                  */
                 ballCount = Integer.parseInt(ballInputField.getText());
                 if (ballCount <= 0) throw new NumberFormatException();
             } catch (NumberFormatException ex) {
                 ballInputField.setText(""); // Clear invalid input
                 ballInputField.setPromptText("Please enter a valid number!");//red color alert
                 ballInputField.setStyle(
                         "-fx-background-color: lightblue;" +
                         "-fx-text-fill: black;" + 
                         "-fx-prompt-text-fill: darkred;" +
                         "-fx-font-family: 'Arital Rounded MT Bold'; " + 
                         "-fx-font-size: 15px;" +
                         "-fx-font-weight: bold;"
                     );
                 return;
             }
 
             // Drop the balls
             dropBalls(pane);
         });
 
         pane.getChildren().addAll(controlBox, slotInfoBox); // Add both VBoxes to the main pane
 
         Scene scene = new Scene(pane, 900, 850); // Adjusted size for better viewing
         primaryStage.setTitle("Bean Machine Animation");
         primaryStage.setScene(scene);
         primaryStage.show();
     }
     
     /**********************
      * Draw Machine Window
      **********************/
     private void drawMachine(Pane pane) {
         // Center alignment base for the whole machine
         int paneCenterX = 450; // Assuming pane width of 900
         int machineWidth = SLOT_WIDTH * SLOT_COUNT; // Total width of the slots
         int slotStartX = paneCenterX - machineWidth / 2; // Start slot from the center
 
         // Draw the pins
         int rows = PINS;
         for (int i = 0; i < rows; i++) {
             for (int j = 0; j <= i; j++) {
                 //here 8 is the pegs width
                 Circle pin = new Circle(paneCenterX - i * (SLOT_WIDTH / 2) + j * SLOT_WIDTH, 150 + i * 50, 8, Color.BLACK);
                 pane.getChildren().add(pin);
             }
         }
 
         // Draw slots
         int slotTopY = 500;    // Top of the slot
         int slotBottomY = 780; // Bottom of the slot
 
         for (int i = 0; i <= SLOT_COUNT; i++) { // Draw slots from 0 to SLOT_COUNT
             Line slot = new Line(slotStartX + i * SLOT_WIDTH, slotTopY, slotStartX + i * SLOT_WIDTH, slotBottomY);
             pane.getChildren().add(slot);
         }
 
         // Base for slots
         Rectangle base = new Rectangle(slotStartX, slotBottomY, SLOT_WIDTH * SLOT_COUNT, 15);
         base.setFill(Color.GRAY);
         pane.getChildren().add(base);
 
         // Add slot numbers below each slot
         for (int i = 0; i < SLOT_COUNT; i++) {
             Label slotNumber = new Label("Slot " + i);
             slotNumber.setStyle(
                 "-fx-text-fill: darkgreen;" +       // Text color
                 "-fx-font-size: 14px;" +       // Font size
                 "-fx-font-family: 'Arial';" +  // Font family
                 "-fx-font-weight: bold;"       // Bold text
             );
             
             // Calculate center position for each slot
             double slotCenterX = slotStartX + (i + 0.5) * SLOT_WIDTH;
             slotNumber.setLayoutX(slotCenterX - 20); // Center align label (adjust offset)
             slotNumber.setLayoutY(slotBottomY + 25); // Place below the slot base from slot number
             pane.getChildren().add(slotNumber);
         }
     }
 
 
     /********************
      * Drop Balls Window 
      ********************/
     private void dropBalls(Pane pane) {
        Random random = new Random();
 
         for (int i = 0; i < ballCount; i++) {
             Circle ball = new Circle(450, 100, BALL_RADIUS); // Start from the top center
             ball.setFill(randomColor());
             ball.setId("ball"); // Assign a unique ID to identify balls
             pane.getChildren().add(ball);
 
             int position = simulateBallPath();
             slots[position]++;
 
             // Calculate slot center
             int paneCenterX = 450; // Center of the pane
             int machineWidth = SLOT_WIDTH * SLOT_COUNT; // Total width of the slots
             int slotStartX = paneCenterX - machineWidth / 2; // Start position of the first slot
             double slotCenterX = slotStartX + (position + 0.5) * SLOT_WIDTH; // Center of the target slot
 
             // Set the ball's final position
             double deltaX = slotCenterX - 450; // Adjusted X translation relative to initial position
             double deltaY = 400 + slots[position] * 20; // Adjusted Y translation (stack balls in each slot)
 
             TranslateTransition transition = new TranslateTransition(Duration.seconds(3), ball);
             transition.setByX(deltaX);
             transition.setByY(deltaY);
             transition.setOnFinished(e -> ball.toFront());
             transition.play();
         }
 
         // Add a delay to update and display slot results
         PauseTransition pause = new PauseTransition(Duration.seconds(4)); // Wait for all animations to complete
         pause.setOnFinished(e -> updateSlotLabels());
         pause.play();
     }
 
 
     /*******************
      * Update Slot Menu
      *******************/
     private void updateSlotLabels() {
         for (int i = 0; i < SLOT_COUNT; i++) { // Only update slots 0 to 6
             slotLabels[i].setText("Slot " + i + ": " + slots[i] + " balls");
         }
     }
     
     /******************************
      * Simulate Ball Path Randomly
      ******************************/
     private int simulateBallPath() {
         Random random = new Random();
         int position = 0;
         for (int i = 0; i < SLOT_COUNT - 1; i++) { // Simulate ball path for 6 decisions
             if (random.nextBoolean()) {
                 position++;
             }
         }
         return position;
     }
     
     /********************
      * Random Ball Color
      ********************/
     private Color randomColor() {
         Random random = new Random();
          return Color.color(random.nextDouble(), random.nextDouble(), random.nextDouble());
     }
     
     /****************
      * Main Function
      ****************/
     public static void main(String[] args) {
         launch(args);
     }
 }
 