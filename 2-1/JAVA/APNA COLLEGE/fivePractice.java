import java.util.Scanner;

public class fivePractice {
    public static void main(String[] args) {

        // create an input object
        Scanner sc = new Scanner(System.in);
        // p1 solid rectangle
        int m = sc.nextInt();
        int n = sc.nextInt();

        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j < n; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // p2 Hollow Rectangle
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

        // p3 Half Pyramid
        // for (int i = 0; i < m; i++) {
        // for (int j = 0; j <= i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // p4 inverted half pyramid
        // for (int i = m; i >= 0; i--) {
        // for (int j = 0; j < i; j++) {
        // System.out.print("*");
        // }
        // System.out.println();
        // }

        // p5 inverted half pyramid [rotated byy 180]
        for (int i = 0; i < m; i++) {
            // for space
            for (int j = 0; j < m - i - 1; j++) {
                System.out.print(" ");
            }
            // print star
            for (int k = 0; k <= i; k++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

}
