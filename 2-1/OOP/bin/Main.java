package application;

import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.*;
import javafx.scene.layout.*;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.stage.Stage;

public class NumberConversionSystem extends Application {

    @Override
    public void start(Stage primaryStage) {
        primaryStage.setTitle("Number Conversion System");

        // Main layout
        VBox mainLayout = new VBox(20);
        mainLayout.setPadding(new Insets(20, 20, 20, 20));
        mainLayout.setAlignment(Pos.CENTER);
        mainLayout.setStyle("-fx-background-color: #f0f8ff;"); // Customize layout background color

        Label titleLabel = new Label("Number Conversion System");
        titleLabel.setFont(Font.font("Arial", 20)); // Customize title font

        // Custom Base Button
        Button customBaseButton = new Button("Use Custom Base");
        setButtonStyle(customBaseButton, "#4CAF50", 16); // Customize button style
        customBaseButton.setOnAction(e -> openCustomBaseSelection(primaryStage));

        // Default Base Button
        Button defaultBaseButton = new Button("Use Default Base");
        setButtonStyle(defaultBaseButton, "#FF9800", 16); // Customize button style
        defaultBaseButton.setOnAction(e -> openDefaultBaseSelection(primaryStage));

        mainLayout.getChildren().addAll(titleLabel, customBaseButton, defaultBaseButton);

        // Main scene
        Scene mainScene = new Scene(mainLayout, 400, 300);
        primaryStage.setScene(mainScene);
        primaryStage.show();
    }

    private void openCustomBaseSelection(Stage primaryStage) {
        VBox selectionLayout = new VBox(15);
        selectionLayout.setPadding(new Insets(20));
        selectionLayout.setAlignment(Pos.CENTER);
        selectionLayout.setStyle("-fx-background-color: #e6e6fa;"); // Customize layout background color

        Button addButton = new Button("Addition");
        setButtonStyle(addButton, "#4CAF50", 14); // Customize button style
        addButton.setOnAction(e -> openCustomBaseWindow(primaryStage, "Add"));

        Button subtractButton = new Button("Subtraction");
        setButtonStyle(subtractButton, "#2196F3", 14); // Customize button style
        subtractButton.setOnAction(e -> openCustomBaseWindow(primaryStage, "Subtract"));

        Button convertButton = new Button("Convert");
        setButtonStyle(convertButton, "#FF9800", 14); // Customize button style
        convertButton.setOnAction(e -> openCustomBaseWindow(primaryStage, "Convert"));

        Button backButton = new Button("Back");
        setButtonStyle(backButton, "#f44336", 14); // Customize button style
        backButton.setOnAction(e -> start(primaryStage));

        selectionLayout.getChildren().addAll(addButton, subtractButton, convertButton, backButton);

        Scene selectionScene = new Scene(selectionLayout, 400, 300);
        primaryStage.setScene(selectionScene);
    }

    private void openDefaultBaseSelection(Stage primaryStage) {
        VBox selectionLayout = new VBox(15);
        selectionLayout.setPadding(new Insets(20));
        selectionLayout.setAlignment(Pos.CENTER);
        selectionLayout.setStyle("-fx-background-color: #fff8dc;"); // Customize layout background color

        Button addButton = new Button("Addition");
        setButtonStyle(addButton, "#4CAF50", 14); // Customize button style
        addButton.setOnAction(e -> openDefaultBaseWindow(primaryStage, "Add"));

        Button subtractButton = new Button("Subtraction");
        setButtonStyle(subtractButton, "#2196F3", 14); // Customize button style
        subtractButton.setOnAction(e -> openDefaultBaseWindow(primaryStage, "Subtract"));

        Button convertButton = new Button("Convert");
        setButtonStyle(convertButton, "#FF9800", 14); // Customize button style
        convertButton.setOnAction(e -> openDefaultBaseWindow(primaryStage, "Convert"));

        Button backButton = new Button("Back");
        setButtonStyle(backButton, "#f44336", 14); // Customize button style
        backButton.setOnAction(e -> start(primaryStage));

        selectionLayout.getChildren().addAll(addButton, subtractButton, convertButton, backButton);

        Scene selectionScene = new Scene(selectionLayout, 400, 300);
        primaryStage.setScene(selectionScene);
    }

    private void openCustomBaseWindow(Stage primaryStage, String operation) {
        VBox customLayout = new VBox(15);
        customLayout.setPadding(new Insets(20));
        customLayout.setAlignment(Pos.CENTER);
        customLayout.setStyle("-fx-background-color: #f5f5f5;"); // Customize layout background color

        Label baseLabel = new Label("Enter Your Base:");
        TextField baseInput = new TextField();
        baseInput.setPromptText("Enter base (e.g., 2 for Binary, 8 for Octal)");

        Label numberLabel1 = new Label("Enter First Base Number:");
        TextField numberInput1 = new TextField();
        numberInput1.setPromptText("Enter first base number");

        Label numberLabel2 = new Label("Enter Second Base Number:");
        TextField numberInput2 = new TextField();
        numberInput2.setPromptText("Enter second base number");

        ComboBox<String> targetBaseBox = new ComboBox<>();
        targetBaseBox.getItems().addAll("Decimal", "Binary", "Octal", "Hexadecimal", "Custom");
        targetBaseBox.setPromptText("Select target base");

        Label resultLabel = new Label();
        Button actionButton = new Button(operation);
        setButtonStyle(actionButton, "#4CAF50", 14); // Customize button style

        Button backButton = new Button("Back");
        setButtonStyle(backButton, "#f44336", 14); // Customize button style

        if (operation.equals("Convert")) {
            customLayout.getChildren().addAll(baseLabel, baseInput, numberLabel1, numberInput1, targetBaseBox, actionButton, resultLabel);
            actionButton.setOnAction(e -> convertNumber(baseInput, numberInput1, targetBaseBox, resultLabel));
        } else {
            customLayout.getChildren().addAll(baseLabel, baseInput, numberLabel1, numberInput1, numberLabel2, numberInput2, targetBaseBox, actionButton, resultLabel);
            actionButton.setOnAction(e -> performOperation(baseInput, numberInput1, numberInput2, targetBaseBox, resultLabel, operation));
        }

        backButton.setOnAction(e -> openCustomBaseSelection(primaryStage));
        customLayout.getChildren().add(backButton);

        Scene customScene = new Scene(customLayout, 400, 400);
        primaryStage.setScene(customScene);
    }

    /*
      * Third Display For Default Base
      */
 
     /*
      * Updated Default Base Window
      */

    private void openDefaultBaseWindow(Stage primaryStage, String operation) {
        VBox defaultLayout = new VBox(15);
        defaultLayout.setPadding(new Insets(20));
        defaultLayout.setAlignment(Pos.CENTER);
        defaultLayout.setStyle("-fx-background-color: #e0ffff;"); // Customize layout background color

        ComboBox<String> fromBox = new ComboBox<>();
        fromBox.getItems().addAll("Binary", "Decimal", "Octal", "Hexadecimal");
        fromBox.setPromptText("From");

        ComboBox<String> toBox = new ComboBox<>();
        toBox.getItems().addAll("Binary", "Decimal", "Octal", "Hexadecimal", "Custom");
        toBox.setPromptText("To");

        TextField numberInput1 = new TextField();
        numberInput1.setPromptText("Enter first number");

        TextField numberInput2 = new TextField();
        numberInput2.setPromptText("Enter second number (for addition/subtraction)");

        Label resultLabel = new Label();
        Button actionButton = new Button(operation);
        setButtonStyle(actionButton, "#4CAF50", 14); // Customize button style

        Button backButton = new Button("Back");
        setButtonStyle(backButton, "#f44336", 14); // Customize button style

        if (operation.equals("Convert")) {
            defaultLayout.getChildren().addAll(fromBox, toBox, numberInput1, actionButton, resultLabel);
            actionButton.setOnAction(e -> convertNumber(fromBox, toBox, numberInput1, resultLabel));
        } else {
            defaultLayout.getChildren().addAll(fromBox, toBox, numberInput1, numberInput2, actionButton, resultLabel);
            actionButton.setOnAction(e -> performOperation(fromBox, toBox, numberInput1, numberInput2, resultLabel, operation));
        }

        backButton.setOnAction(e -> openDefaultBaseSelection(primaryStage));
        defaultLayout.getChildren().add(backButton);

        Scene defaultScene = new Scene(defaultLayout, 400, 400);
        primaryStage.setScene(defaultScene);
    }

    // Styling method to easily set button color and font
    private void setButtonStyle(Button button, String color, int fontSize) {
        button.setStyle("-fx-background-color: " + color + "; -fx-text-fill: white;");
        button.setFont(Font.font("Arial", fontSize));
    }

    private void performOperation(TextField baseInput, TextField numberInput1, TextField numberInput2, ComboBox<String> targetBaseBox, Label resultLabel, String operation) {
        try {
            int base = Integer.parseInt(baseInput.getText());
            double num1 = parseFractional(numberInput1.getText(), base);
            double num2 = parseFractional(numberInput2.getText(), base);

            double result = operation.equals("Add") ? num1 + num2 : num1 - num2;
            int targetBase = targetBaseBox.getValue().equals("Custom") ? base : getTargetBase(targetBaseBox.getValue());
            resultLabel.setText("Result (" + operation + "): " + convertFractional(result, targetBase));
        } catch (Exception e) {
            resultLabel.setText("Invalid input or base.");
        }
    }

    private void performOperation(ComboBox<String> fromBox, ComboBox<String> toBox, TextField numberInput1, TextField numberInput2, Label resultLabel, String operation) {
        try {
            int fromBase = getTargetBase(fromBox.getValue());
            double num1 = parseFractional(numberInput1.getText(), fromBase);
            double num2 = parseFractional(numberInput2.getText(), fromBase);

            double result = operation.equals("Add") ? num1 + num2 : num1 - num2;
            int targetBase = getTargetBase(toBox.getValue());
            resultLabel.setText("Result (" + operation + "): " + convertFractional(result, targetBase));
        } catch (Exception e) {
            resultLabel.setText("Invalid input or base.");
        }
    }

    private double parseFractional(String number, int base) {
        String[] parts = number.split("\\.");
        int integerPart = Integer.parseInt(parts[0], base);
        double fractionalPart = 0;

        if (parts.length > 1) {
            for (int i = 0; i < parts[1].length(); i++) {
                int digitValue = Character.digit(parts[1].charAt(i), base);
                fractionalPart += digitValue / Math.pow(base, i + 1);
            }
        }
        return integerPart + fractionalPart;
    }

    private String convertFractional(double number, int base) {
        int integerPart = (int) number;
        double fractionalPart = number - integerPart;

        String integerResult = Integer.toString(integerPart, base).toUpperCase();
        StringBuilder fractionalResult = new StringBuilder(".");

        for (int i = 0; i < 10; i++) { // Limit to 10 digits for precision
            fractionalPart *= base;
            int digitValue = (int) fractionalPart;
            fractionalResult.append(Character.forDigit(digitValue, base));
            fractionalPart -= digitValue;
            if (fractionalPart == 0) break;
        }

        return integerResult + fractionalResult.toString();
    }

    private void convertNumber(TextField baseInput, TextField numberInput, ComboBox<String> targetBaseBox, Label resultLabel) {
        try {
            int base = Integer.parseInt(baseInput.getText());
            double number = parseFractional(numberInput.getText(), base);
            int targetBase = targetBaseBox.getValue().equals("Custom") ? base : getTargetBase(targetBaseBox.getValue());
            resultLabel.setText("Converted Value: " + convertFractional(number, targetBase));
        } catch (Exception e) {
            resultLabel.setText("Invalid input or base.");
        }
    }

    private void convertNumber(ComboBox<String> fromBox, ComboBox<String> toBox, TextField numberInput, Label resultLabel) {
        try {
            int fromBase = getTargetBase(fromBox.getValue());
            double number = parseFractional(numberInput.getText(), fromBase);
            int targetBase = getTargetBase(toBox.getValue());
            resultLabel.setText("Converted Value: " + convertFractional(number, targetBase));
        } catch (Exception e) {
            resultLabel.setText("Invalid input or base.");
        }
    }

    private int getTargetBase(String baseName) {
        return switch (baseName) {
            case "Binary" -> 2;
            case "Octal" -> 8;
            case "Decimal" -> 10;
            case "Hexadecimal" -> 16;
            default -> throw new IllegalArgumentException("Invalid base");
        };
    }

    public static void main(String[] args) {
        launch(args);
    }
}
