import java.util.Scanner;

public class Main {

    // Method to generate all permutations of a string
    public static void perm(char[] str, int left, int right) {
        if (left == right) {
            System.out.println(String.valueOf(str)); // Print the permutation
        } else {
            for (int i = left; i <= right; i++) {
                swap(str, left, i); // Swap current element
                perm(str, left + 1, right); // Recurse
                swap(str, left, i); // Backtrack (undo the swap)
            }
        }
    }

    // Method to swap two characters in a char array
    public static void swap(char[] str, int left, int right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
    }

    public static void main(String[] args) {
        System.out.print("Enter a string: ");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int strL = str.length() - 1;

        // Convert string to char array for manipulation
        perm(str.toCharArray(), 0, strL);
    }
}
