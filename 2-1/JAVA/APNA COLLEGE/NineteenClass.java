// import java.util.Scanner;

// public class NineteenClass {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a new String: ");
//         // Problem 1: Print all permutations of a string
//         String str = sc.nextLine();
//         PrintPermutations(str, "");

//     }

//     public static void PrintPermutations(String str, String permutation) {
//         System.out.println("Permutations: " + permutation);
//         // base case
//         if (str.length() == 0) {
//             System.out.println(permutation);
//             return;
//         }
//         for (int i = 0; i < str.length(); i++) {
//             char currChar = str.charAt(i);
//             System.out.println("i = " + i);
//             String newStr = str.substring(0, i) + str.substring(i + 1, str.length());
//             System.out.println("Print new String: " + newStr);
//             PrintPermutations(newStr, permutation + currChar);
//         }
//     }

// }

import java.util.Scanner;

public class NineteenClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a new String: ");
        // Problem 1: Print all permutations of a string
        String str = sc.nextLine();
        int left = 0, right = str.length() - 1;
        PrintPermutations(str, left, right);

    }

    public static void PrintPermutations(String str, int left, int right) {

        // Base case
        if (left == right) {
            System.out.println(str);
        } else {
            for (int i = left; i <= right; i++) {
                str = swap(str, left, i);
                PrintPermutations(str, left + 1, right);
            }
        }
    }

    // swap function
    public static String swap(String str, int left, int i) {
        // Step 1: Convert the string to a character array
        char[] charArray = str.toCharArray();

        // Step 2: Store the character at index i in a temporary variable
        char temp = charArray[left];

        // Step 3: Replace the character at index i with the character at index j
        charArray[left] = charArray[i];

        // Step 4: Replace the character at index j with the character stored in temp
        charArray[i] = temp;

        // Step 5: Convert the modified character array back to a string and return it
        return String.valueOf(charArray);
    }
}