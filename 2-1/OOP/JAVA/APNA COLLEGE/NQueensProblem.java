import java.util.*;

public class NQueensProblem {

    // Global variables
    static List<List<String>> solutions = new ArrayList<>();
    static List<String> board = new ArrayList<>();
    static Set<Integer> columns = new HashSet<>();
    static Set<Integer> diag = new HashSet<>();
    static Set<Integer> antiD = new HashSet<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of Queens: ");
        int n = sc.nextInt();

        // Call the solveNQueens method to find solutions
        solveNQueens(n);

        // Print each solution
        for (List<String> solution : solutions) {
            for (String row : solution) {
                System.out.println(row);
            }
            System.out.println();
        }

        sc.close();
    }

    public static void solveNQueens(int n) {
        // Reset global variables in case solveNQueens is called multiple times
        solutions.clear();
        board.clear();
        columns.clear();
        diag.clear();
        antiD.clear();

        if (n == 0) {
            return;
        }

        // Initialize the board with empty rows ('.')
        for (int i = 0; i < n; i++) {
            char[] row = new char[n];
            Arrays.fill(row, '.');
            board.add(new String(row));
        }

        // Start solving from the first row (row 0)
        solve(0);
    }

    private static void solve(int row) {
        if (row == board.size()) {
            // Add a deep copy of the board to solutions
            solutions.add(new ArrayList<>(board));
            return;
        }

        for (int col = 0; col < board.size(); col++) {
            int diagonalSum = row - col;
            int antiDiagonalSum = row + col;

            // Check if placing a queen at (row, col) is safe
            if (columns.contains(col) || diag.contains(diagonalSum) || antiD.contains(antiDiagonalSum)) {
                continue;
            }

            // Place the queen and mark the column, diagonal, and anti-diagonal
            columns.add(col);
            diag.add(diagonalSum);
            antiD.add(antiDiagonalSum);
            char[] rowArray = board.get(row).toCharArray();
            rowArray[col] = 'Q';
            board.set(row, new String(rowArray));

            // Move to the next row
            solve(row + 1);

            // Backtrack: remove the queen and unmark the sets
            columns.remove(col);
            diag.remove(diagonalSum);
            antiD.remove(antiDiagonalSum);
            rowArray[col] = '.';
            board.set(row, new String(rowArray));
        }
    }
}
