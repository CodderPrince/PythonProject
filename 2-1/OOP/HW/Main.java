import java.util.Scanner;

public class Main {
    public static Location locateLargest(double[][] a) {
        int maxRow = 0;
        int maxColumn = 0;
        double maxVal = a[0][0];

        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                if (a[i][j] > maxVal) {
                    maxVal = a[i][j];
                    maxRow = i;
                    maxColumn = j;
                }
            }
        }
        
        return new Location(maxRow, maxColumn, maxVal);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the number of rows and columns in the array: ");
        int rows = input.nextInt();
        int columns = input.nextInt();

        double[][] array = new double[rows][columns];
        System.out.println("Enter the array:");

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                array[i][j] = input.nextDouble();
            }
        }

        Location loc = locateLargest(array);
        System.out.println("The location of the largest element is " + loc.maxValue +
                           " at (" + loc.row + ", " + loc.column + ")");
        
        input.close();
    }
}
