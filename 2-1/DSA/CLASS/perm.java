import java.util.Scanner;

public class perm {
    // create function
    public static void permutation(char[] str, int left, int right) {
        if (left == right) {
            System.out.println(String.valueOf(str));
        }

        else {
            int i = left;
            while (i <= right) {
                swap(str, left, i);
                permutation(str, left + 1, right);
                swap(str, left, i);
                i += 1;
            }
        }
    }

    public static void swap(char[] str, int left, int i) {
        char temp = str[left];
        str[left] = str[i];
        str[i] = temp;
    }

    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int len = str.length() - 1;
        permutation(str.toCharArray(), 0, len);
    }
}