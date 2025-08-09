import java.util.Scanner;

public class TenClass {
    public static void main(String args[]) {
        // int[] marks = new int[3];
        // int[] marks1 = { 1, 2, 3 };
        // for (int i = 1; i <= 3; i++) {
        // System.out.println(marks1[i] + " ");
        // }

        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] array = new int[size];
        // input element
        for (int i = 0; i < array.length; i++) {
            array[i] = sc.nextInt();
        }

        int x = sc.nextInt();
        for (int i = 0; i < size; i++) {
            if (array[i] == x) {
                System.out.println("X found at index: " + i);
            }
        }
    }

}
