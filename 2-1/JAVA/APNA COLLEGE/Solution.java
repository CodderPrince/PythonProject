import java.util.Scanner;

/*
 * Problem Name: Sudoku Solver
 */
class Solution {
    public static boolean isSafe(char[][] board, int row, int col, int number) {
        // column
        /*
         * check that full columns that number already exist or not
         * (0,0), (1,0), (2,0).....
         */
        for (int i = 0; i < board.length; i++) {
            if (board[i][col] == (char) (number + '0')) {
                return false;
            }
        }

        // row
        /*
         * check that row that number already exists or not
         * (0,0), (0,1), (0,2).......
         */
        for (int j = 0; j < board.length; j++) {
            if (board[row][j] == (char) (number + '0')) {
                return false;
            }
        }

        // grid
        /*
         * in suduko there are total 3 main grid 3 x 3
         * in suduko there are total 9 sub grid that also 3 x 3
         */
        int sr = 3 * (row / 3);
        int sc = 3 * (col / 3);

        /*
         * row = 0; sr = 0; then it indicates 1st row that means 1st 3 rows
         * col = 3; sc = 3; then it indicates 2nd column that means 4-6 coloumns
         * if we overlap that then we found it's a 2nd sub grid that index are
         * (0,3), (0,4), (0,5)
         * (1,3), (1,4), (1,5)
         * (2,3), (2,4), (2,5)
         */
        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if (board[i][j] == (char) (number + '0')) {
                    return false;
                }
            }
        }
        return true;
    }

    // helper function
    public static boolean helper(char[][] board, int row, int col) {
        // when we reach the last row then no move possible so, return true
        if (row == board.length) {
            return true;
        }

        // create new row and new columns
        int nrow = 0;
        int ncol = 0;

        /*
         * if we reach the last cell of a row
         * then increase row number and columns = 0
         * supposed we stay:(0,8) index means 1st row last cell
         * nrow = 1 and ncol = 0 reach(1,0) index
         * Row wise check
         * (1,0), (2,0), (3,0)....check every row that number already exists or not
         */
        if (col == board.length - 1) {
            nrow = row + 1;
            ncol = 0;
        }

        /*
         * else we check columns wise
         * nrow = 0
         * ncol = 1,2,3...8
         * (0,1),(0,2),(0,3)........check every columns that number already exists or
         * not
         */
        else {
            nrow = row;
            ncol = col + 1;
        }

        // now check thats cell is . or number
        if (board[row][col] != '.') {
            // if . then check for that cell this number is valid or not
            if (helper(board, nrow, ncol)) {
                return true;
            }
        }

        /*
         * suppose that cell is dot . but current number is 2
         * check row, columns and grid and find number 2 is already exist
         * then create a for loop 1 to 9 and check which number is valid for that cell
         */
        else {
            // fill the place
            for (int i = 1; i <= 9; i++) {
                if (isSafe(board, row, col, i)) {

                    /*
                     * send that number as a string so typecast that number
                     * for (1 to 9 are integer number but we need to passed string)
                     * so typecast that integer to character
                     * 1 + '0'(character 0 ) = 1(now character)
                     */
                    board[row][col] = (char) (i + '0');

                    /*
                     * if helper function find that number is valid for that index
                     * so place that number to the index
                     * and return true
                     */
                    if (helper(board, nrow, ncol)) {
                        return true;
                    }

                    /*
                     * Else helper function is find that number is not valid for that index
                     * then again fill up that index by dot (.)
                     */
                    else {
                        board[row][col] = '.';
                    }
                }
            }
        }

        // if check all true condition then return false
        // that means there are no valid answer for that
        return false;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // create a 9 x 9 sudoku board
        char[][] board = new char[9][9];

        System.out.println("Enter the Sudoku board (use '.' for empty cells):");
        for (int i = 0; i < 9; i++) {

            /*
             * This is a special replace function which replace all types of whitespace
             * When enter sudoku number then it's function replace all types whitespaces
             * If we don't use this function then our loop will be out of bounds
             * Our loop iterates everytime 1-9 times but if we input whitespaces that
             * also counts then we are not able to input total 9 numbers
             * So, we need to delete all whitespaces
             */
            String line = scanner.nextLine().replace(" ", "");
            for (int j = 0; j < 9; j++) {
                board[i][j] = line.charAt(j);
                // use charAt so modify every index
            }
        }

        // call the function
        helper(board, 0, 0);

        System.out.println("Solved Sudoku board:");
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                System.out.print(board[i][j] + " ");
            }
            System.out.println();
        }

        scanner.close();
    }
}

// input:
// 5 3 . . 7 . . . .
// 6 . . 1 9 5 . . .
// . 9 8 . . . . 6 .
// 8 . . . 6 . . . 3
// 4 . . 8 . 3 . . 1
// 7 . . . 2 . . . 6
// . 6 . . . . 2 8 .
// . . . 4 1 9 . . 5
// . . . . 8 . . 7 9

// output:
// 5 3 4 6 7 8 9 1 2
// 6 7 2 1 9 5 3 4 8
// 1 9 8 3 4 2 5 6 7
// 8 5 9 7 6 1 4 2 3
// 4 2 6 8 5 3 7 9 1
// 7 1 3 9 2 4 8 5 6
// 9 6 1 5 3 7 2 8 4
// 2 8 7 4 1 9 6 3 5
// 3 4 5 2 8 6 1 7 9
