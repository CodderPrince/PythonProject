
public class FloodFill {

    // Method to perform flood fill
    public static void floodFill(int[][] grid, int x, int y, int targetColor, int replacementColor) {
        // Base case: If out of bounds or the current cell does not match the target color, return
        if (x < 0 || y < 0 || x >= grid.length || y >= grid[0].length || grid[x][y] != targetColor) {
            return;
        }

        // Replace the color at the current cell
        grid[x][y] = replacementColor;

        // Recursively apply the flood fill to the neighboring cells (4 directions)
        floodFill(grid, x + 1, y, targetColor, replacementColor); // Down
        floodFill(grid, x - 1, y, targetColor, replacementColor); // Up
        floodFill(grid, x, y + 1, targetColor, replacementColor); // Right
        floodFill(grid, x, y - 1, targetColor, replacementColor); // Left
    }

    // Method to print the grid 
    public static void printGrid(int[][] grid) {
        for (int[] row : grid) {
            for (int cell : row) {
                System.out.print(cell + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // Example 2D grid (matrix)
        int[][] grid = {
            {1, 1, 1, 2},
            {1, 1, 0, 2},
            {2, 0, 0, 2},
            {2, 2, 2, 2}
        };

        System.out.println("Original Grid:");
        printGrid(grid);

        // Starting point (1, 1), target color 1, and replacement color 5
        int x = 1, y = 1;
        int targetColor = grid[x][y];  // The color we want to replace (original color at the start point)
        int replacementColor = 5;  // The new color

        // Apply flood fill algorithm
        floodFill(grid, x, y, targetColor, replacementColor);

        System.out.println("\nGrid after Flood Fill:");
        printGrid(grid);
    }
}
