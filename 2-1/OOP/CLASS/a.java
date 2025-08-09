
/*
 * Problem: 9.13
 * Find a largest element in 2D array
 */
import java.util.Scanner;

public class a {

    // Inner Location class to store the location of the largest element
    public static class Location {
        public int row;        // Row index of the largest element
        public int column;     // Column index of the largest element
        public double maxValue; // Value of the largest element

        // Constructor to initialize row, column, and maxValue
        public Location(int row, int column, double maxValue) {
            this.row = row;
            this.column = column;
            this.maxValue = maxValue;
            
            
        }
    }

    // Method to locate the largest element in a 2D array
    public static Location locateLargest(double[][] a) {
        int maxRow = 0;         // Initialize the row index of the max element
        int maxColumn = 0;      // Initialize the column index of the max element
        double maxVal = a[0][0]; // Assume the first element is the largest

        // Iterate through the array to find the largest element
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                // If a larger element is found, update maxVal, maxRow, and maxColumn
                if (a[i][j] > maxVal) {
                    maxVal = a[i][j];
                    maxRow = i;
                    maxColumn = j;
                }
            }
        }
        
        // Return the Location object with row, column, and value of the largest element
        //create new instances so use 'new' keyword
        return new Location(maxRow, maxColumn, maxVal);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        

        // Prompt the user to enter the number of rows and columns in the array
        System.out.print("Enter the number of rows and columns in the array: ");
        int rows = input.nextInt();       // Number of rows
        int columns = input.nextInt();     // Number of columns

        // Create a 2D array with the specified number of rows and columns
        double[][] array = new double[rows][columns];
        System.out.println("Enter the array:");

        // Populate the array with user input values
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                array[i][j] = input.nextDouble();
            }
        }

        // Locate the largest element in the array
        Location loc = locateLargest(array);

        // Display the location and value of the largest element
        System.out.println("The location of the largest element is " + loc.maxValue +
                           " at (" + loc.row + ", " + loc.column + ")");
        
        input.close(); // Close the scanner to prevent resource leaks
    }
}
