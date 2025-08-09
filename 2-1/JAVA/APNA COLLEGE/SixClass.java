import java.util.Scanner;

public class SixClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of n: ");
        int n = sc.nextInt();

        // upper half
        /*
         * for (int i = 1; i <= n; i++) {
         * // for star
         * for (int j = 1; j <= i; j++) {
         * System.out.print("*");
         * }
         * int spaces = 2 * (n - i);
         * // print spaces
         * for (int m = 1; m <= spaces; m++) {
         * System.out.print(" ");
         * }
         * 
         * // 2nd part
         * for (int x = 1; x <= i; x++) {
         * System.out.print("*");
         * }
         * System.out.println();
         * }
         * 
         * //lower half
         * for (int i = n; i >=1; i--) {
         * // for star
         * for (int j = 1; j <= i; j++) {
         * System.out.print("*");
         * }
         * int spaces = 2 * (n - i);
         * // print spaces
         * for (int m = 1; m <= spaces; m++) {
         * System.out.print(" ");
         * }
         * 
         * // 2nd part
         * for (int x = 1; x <= i; x++) {
         * System.out.print("*");
         * }
         * System.out.println();
         * 
         * }
         */

        /*
         * // p 11 Solid Rhombus
         * 
         * // for outer row
         * for (int i = 1; i <= n; i++) {
         * // for spaces 4, 3 ,2 , 1 , 0
         * for (int j = 1; j <= n - i; j++) {
         * System.out.print(" ");
         * }
         * // for star
         * for (int k = 1; k <= n; k++) {
         * System.out.print("*");
         * }
         * 
         * // for last spaces
         * for (int x = 1; x < i; x++) {
         * System.out.print(" ");
         * }
         * System.out.println();
         * }
         */

        // Extra Hollo Rhombus
        // For outer row
        /*
         * for (int i = 1; i <= n; i++) {
         * // For spaces
         * for (int j = 1; j <= n - i; j++) {
         * System.out.print(" ");
         * }
         * 
         * // For star
         * for (int k = 1; k <= n; k++) {
         * if (i == 1 || i == n || k == 1 || k == n) {
         * System.out.print("*");
         * } else {
         * System.out.print(" ");
         * }
         * }
         * System.out.println();
         * }
         */

        // for outer loop
        /*
         * for (int i = 1; i <= n; i++) {
         * // for spaces
         * int spaces = n - i;
         * for (int j = 1; j <= spaces; j++) {
         * System.out.print(" ");
         * }
         * // for number print
         * for (int k = 1; k <= i; k++) {
         * System.out.print(i + " ");
         * }
         * System.out.println();
         * }
         */

        // 14 Palindromic pattern
        // for outer loop
        /*
         * for (int i = 1; i <= n; i++) {
         * 
         * // print spaces
         * int spaces = n - i;
         * for (int j = 1; j <= spaces; j++) {
         * System.out.print(" ");
         * }
         * // first half backward loop
         * for (int k = i; k >= 1; k--) {
         * System.out.print(k);
         * }
         * 
         * // second half forward loop
         * for (int m = 2; m <= i; m++) {
         * System.out.print(m);
         * }
         * System.out.println();
         * }
         */

        // 15 Diamond pattern

        // upper half
        // for outer loop
        for (int i = 1; i <= n; i++) {
            // spaces
            int spaces = n - i;
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }

            int star = 2 * i - 1;
            for (int k = 1; k <= star; k++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // lower half
        for (int i = n; i >= 1; i--) {
            // for spaces
            int spaces = n - i;
            for (int j = 1; j <= spaces; j++) {
                System.out.print(" ");
            }
            int star = 2 * i - 1;
            for (int k = 1; k <= star; k++) {
                System.out.print("*");
            }
            System.out.println();
        }

    }

}
