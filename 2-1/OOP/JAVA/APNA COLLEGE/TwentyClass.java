// import java.util.ArrayList;
// import java.util.Arrays;
// import java.util.HashSet;
// import java.util.List;
// import java.util.Scanner;
// import java.util.Set;

// public class TwentyClass {

//     public static void main(String[] args) {

//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of Queens: ");
//         int n = sc.nextInt();

//         // Directly store the result in one 2D list (solutions)
//         List<List<String>> solutions = solveNQueens(n);

//         for (List<String> solution : solutions) {
//             for (String row : solution) {
//                 System.out.println(row);
//             }
//             System.out.println();
//         }

//         sc.close();
//     }

//     public static List<List<String>> solveNQueens(int n) {
//         List<List<String>> solutions = new ArrayList<>();

//         if (n == 0) {
//             return solutions;
//         }

//         List<String> board = new ArrayList<>();
//         for (int i = 0; i < n; i++) {
//             char[] row = new char[n];
//             Arrays.fill(row, '.');
//             board.add(new String(row));
//         }

//         int startRow = 0;
//         Set<Integer> columns = new HashSet<>();
//         Set<Integer> diag = new HashSet<>();
//         Set<Integer> antiD = new HashSet<>();

//         solve(board, startRow, columns, diag, antiD, solutions);

//         return solutions;
//     }

//     private static void solve(List<String> board, int row, Set<Integer> columns, Set<Integer> diag, Set<Integer> antiD,
//             List<List<String>> solutions) {
//         if (row == board.size()) {
//             solutions.add(new ArrayList<>(board)); // Add solution directly to solutions
//             return;
//         }

//         for (int col = 0; col < board.size(); col++) {
//             int diagonalSum = row - col;
//             int antiDiagonalSum = row + col;

//             if (columns.contains(col) || diag.contains(diagonalSum) || antiD.contains(antiDiagonalSum)) {
//                 continue;
//             }

//             columns.add(col);
//             diag.add(diagonalSum);
//             antiD.add(antiDiagonalSum);

//             char[] rowArray = board.get(row).toCharArray();
//             rowArray[col] = 'Q';
//             board.set(row, new String(rowArray));

//             solve(board, row + 1, columns, diag, antiD, solutions);

//             columns.remove(col);
//             diag.remove(diagonalSum);
//             antiD.remove(antiDiagonalSum);
//             rowArray[col] = '.';
//             board.set(row, new String(rowArray));
//         }
//     }
// }

import java.util.*;

public class TwentyClass {
    // Create global array to store permutations
    static List<String> result = new ArrayList<>();

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        // Call the function to generate permutations
        generatePermutation(str.toCharArray(), 0, str.length() - 1);

        // Print all permutations
        System.out.println("All permutations:");
        for (String perm : result) {
            System.out.println(perm);
        }

        sc.close();
    }

    // Function to generate permutations
    public static void generatePermutation(char[] str, int left, int right) {
        // Base case: if left == right, add the permutation to the result list
        if (left == right) {
            result.add(new String(str)); // Convert char[] back to String
        } else {
            for (int i = left; i <= right; i++) {
                // Swap characters at positions left and i
                swap(str, left, i);

                // Recur to generate permutations with the next character fixed
                generatePermutation(str, left + 1, right);

                // Backtrack by undoing the swap
                swap(str, left, i);
            }
        }
    }

    // Helper function to swap characters in a character array
    public static void swap(char[] str, int i, int j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
