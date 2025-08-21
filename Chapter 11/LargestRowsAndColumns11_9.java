/*
 * 11.9
 * 
 */

import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class LargestRowsAndColumns11_9 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Prompt the user to enter the array size n
        System.out.print("\nEnter the array size n: ");
        int n = input.nextInt();

        // Initialize the n-by-n matrix
        int[][] matrix = new int[n][n];
        Random random = new Random();

        // Fill the matrix with random 0s and 1s
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = random.nextInt(2); // Generates 0 or 1 randomly
            }
        }

        // Print the generated matrix
        System.out.println("The random array is");
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(matrix[i][j]);
            }
            System.out.println();
        }

        // Initialize an ArrayList to store row indices with the most 1s
        ArrayList<Integer> largestRowIndices = new ArrayList<>();
        int maxRowCount = 0; // Variable to track the maximum number of 1s in any row

        // Find rows with the maximum number of 1s
        for (int i = 0; i < n; i++) {
            int rowCount = 0; // Counter for the number of 1s in the current row
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 1) { // If element is 1, increase the row count
                    rowCount++;
                }
            }
            // Update the list of row indices if this row has the most 1s
            if (rowCount > maxRowCount) {
                maxRowCount = rowCount;
                largestRowIndices.clear(); // Clear previous indices as we found a new max
                largestRowIndices.add(i); // Add the current row index
            } else if (rowCount == maxRowCount) {
                largestRowIndices.add(i); // Add the current row index if it ties with max
            }
        }

        // Initialize an ArrayList to store column indices with the most 1s
        ArrayList<Integer> largestColumnIndices = new ArrayList<>();
        int maxColCount = 0; // Variable to track the maximum number of 1s in any column

        // Find columns with the maximum number of 1s
        for (int j = 0; j < n; j++) {
            int colCount = 0; // Counter for the number of 1s in the current column
            for (int i = 0; i < n; i++) {
                if (matrix[i][j] == 1) { // If element is 1, increase the column count
                    colCount++;
                }
            }
            // Update the list of column indices if this column has the most 1s
            if (colCount > maxColCount) {
                maxColCount = colCount;
                largestColumnIndices.clear(); // Clear previous indices as we found a new max
                largestColumnIndices.add(j); // Add the current column index
            } else if (colCount == maxColCount) {
                largestColumnIndices.add(j); // Add the current column index if it ties with max
            }
        }

        // Display the results
        System.out.println("\nThe largest row index(Max 1): " + largestRowIndices);
        System.out.println("\nThe largest column index(Max 1): " + largestColumnIndices + "\n");

        input.close();
    }
}
