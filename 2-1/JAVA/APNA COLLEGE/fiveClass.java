import java.util.Scanner;

public class fiveClass {
    public static void main(String[] args) {
        // 1st pattern
        /*
         * ****
         * ****
         * ****
         * ****
         */
        // for (int i = 0; i < 4; i++) {
        // for (int j = 0; j < 4; j++) {
        // System.out.print("*");

        // }
        // System.out.println();
        // }

        // Scanner sc = new Scanner(System.in);

        // System.out.print("Enter the row number: ");
        // int m = sc.nextInt();

        // System.out.print("Enter the coloumn number: ");
        // int n = sc.nextInt();

        // for (int row = 1; row <= m; row++) {
        // for (int col = 1; col <= n; col++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // Second Pattern
        // Hollo Rectangle
        /*
         * *****
         * * *
         * * *
         * *****
         */
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the row number: ");
        int m = sc.nextInt();

        System.out.print("Enter the coloumn number: ");
        int n = sc.nextInt();

        // for (int row = 0; row < m; row++) {
        // for (int col = 0; col < n; col++) {
        // if (row == 0 && col == 0) {
        // System.out.print("*");
        // } else if (row == 0 && col != 0) {
        // System.out.print("*");
        // } else if (row != 0 && col == 0) {
        // System.out.print("*");
        // } else if (row != 0 && col == (n - 1)) {
        // System.out.print("*");
        // } else if (row == (m - 1) && col != 0) {
        // System.out.print("*");
        // }

        // else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j < n; j++) {
        // if (i == 0 || j == 0 || i == (m - 1) || j == (n - 1)) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // Pattern 4
        // half pyramid:
        // *
        // **
        // ***
        // *****

        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j < n; j++) {
        // if (i == j || i > j) {
        // System.out.print("*");
        // } else {
        // System.out.print(" ");
        // }
        // }
        // System.out.println();
        // }

        // if blank spot is a space then above soluttion
        // else

        // for (int i = 0; i <= m; i++) {
        // for (int j = 0; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // 4 inverted half pyramid
        // ****
        // ***
        // **
        // *

        // for (int i = m - 1; i >= 0; i--) {
        // for (int j = 0; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // problem 5
        // inverted half pyramid
        // rotated by 180 degree
        // *
        // **
        // ***
        // ****

        // for (int i = 0; i < m; i++) {
        // // inner loop for print space
        // // System.out.println("i = "+i);
        // for (int j = 0; j < m - i - 1; j++) {
        // System.out.print("");
        // }
        // {
        // // inner loop for -> star
        // for (int k = 0; k <= i; k++) {
        // System.out.print("*");
        // }
        // }

        // System.out.println();

        // p6 print number pattern [ Half Pyramid ]
        // for (int i = 1; i <= m; i++) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print(j + " ");
        // }
        // System.out.println();
        // }

        // // p7 inverted number pattern [Half Pyramid]
        // for (int i = m; i >= 1; i--) {
        // for (int j = 1; j <= i; j++) {
        // System.out.print(j + " ");
        // }
        // System.out.println();
        // }

        // p8 Floyd's Triangle
        // create a counter
        // int cnt = 1;
        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j <= i; j++) {
        // System.out.print(cnt + " ");
        // cnt++;
        // }
        // System.out.println();

        // p9 0-1 Triangle
        for (int i = 0; i < m; i++) {
            for (int j = 0; j <= i; j++) {
                if ((i + j) % 2 != 0) {
                    System.out.print("0 ");
                } else {
                    System.out.print("1 ");
                }
            }
            System.out.println();
        }
    }
}
 