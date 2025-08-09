import java.util.Scanner;

public class ElevenClass {
    public static void main(String args[]) {
        // 2d array
        int[][] array = new int[3][4];
        Scanner sc = new Scanner(System.in);

        // input array
        System.out.println("Input arrays element [3][4]:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                array[i][j] = sc.nextInt();
            }
        }

        // print array
        System.out.println("Print array:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 4; j++) {
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
    }

}
