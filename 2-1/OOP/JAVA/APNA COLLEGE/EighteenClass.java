// import java.util.Scanner;

// public class EightteenClass {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         // problem number 1: Tower of Hanoi
//         System.out.print("Enter the number of n: ");
//         int n = sc.nextInt();
//         towerOfHanoi(n, "S", "H", "D");
//     }

//     public static void towerOfHanoi(int n, String S, String H, String D) {
//         // base case
//         if (n == 1) {
//             System.out.println("Transfer disk " + n + " from " + S + " to " + D);
//             return;
//         }

//         // if n is more than 1:
//         // first target push n-1 S to H
//         towerOfHanoi(n - 1, S, D, H);
//         System.out.println("Transfer disk " + n + " from " + S + " to " + D);
//         // second target: push remain n-1 disk H to D
//         towerOfHanoi(n - 1, H, S, D);
//     }

// }

// import java.util.Scanner;

// public class EightteenClass {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         // problem number 1: Reverse a string
//         System.out.print("Enter a string: ");
//         String str = sc.nextLine();
//         printReverse(str, str.length() - 1);

//     }

//     public static void printReverse(String str, int ind) {
//         // base case
//         if (ind == 0) {
//             System.out.println(str.charAt(ind));
//             return;
//         }

//         System.out.print(str.charAt(ind));
//         printReverse(str, ind - 1);

//     }

// }

// import java.util.Scanner;

// public class EighteenClass {
//     public static int first = -1;
//     public static int last = -1;

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Problem: Find the first & last occurrence of an element in a string
//         System.out.print("Enter a string: ");
//         String str = sc.nextLine();

//         findOccurrence(str, 0, 'a');

//         if (first == -1) {
//             System.out.println("Character not found.");
//         } else {
//             System.out.println("First occurrence: " + first);
//         }
//         if (last == -1) {
//             System.out.println("Character not found.");
//         } else {
//             System.out.println("Last occurrence: " + last);
//         }

//         // Reset global variables for future runs (optional)
//         first = -1;
//         last = -1;
//     }

//     public static void findOccurrence(String str, int ind, char element) {
//         // Base case: if index reaches the end of the string
//         if (ind == str.length()) {
//             return;
//         }

//         // Check if the current character matches the element
//         if (str.charAt(ind) == element) {
//             if (first == -1) {
//                 first = ind;
//             } else {
//                 last = ind; // Update last occurrence each time element is found
//             }
//         }

//         // Recursive call to move to the next character
//         findOccurrence(str, ind + 1, element);
//     }
// }

// import java.util.Scanner;

// public class EighteenClass {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Problem: Check if an array is sorted(Strictly Increasing)
//         int arr[] = { 1, 2, 3, 4, 5 };
//         System.out.println(isSorted(arr, 0));

//     }

//     public static boolean isSorted(int arr[], int ind) {
//         // base case to go untill array length
//         if (ind == arr.length - 1) {
//             return true;
//         }
//         // array is still sorted
//         if (arr[ind] < arr[ind + 1]) {
//             return isSorted(arr, ind + 1);
//         } else {
//             return false;
//         }
//     }
// }

// import java.util.Scanner;

// public class EighteenClass {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Problem: Move all 'x' to the end of the string
//         System.out.print("Enter a String: ");

//         String str = sc.nextLine();
//         moveAllX(str, 0, 0, "");

//     }

//     public static void moveAllX(String str, int ind, int cnt, String newString) {

//         // base case
//         if (ind == str.length()) {
//             for (int i = 0; i < cnt; i++) {
//                 newString += 'x';
//             }
//             System.out.println(newString);
//             return;
//         }

//         if (str.charAt(ind) == 'x') {
//             cnt++;
//             moveAllX(str, ind + 1, cnt, newString);
//         }
//         // else other characters found
//         else {
//             newString += str.charAt(ind);
//             moveAllX(str, ind + 1, cnt, newString);
//         }

//     }
// }

// import java.util.Scanner;

// public class EighteenClass {
//     // 26 size array
//     public static boolean[] map = new boolean[26];

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Problem: Remove duplicates in a string
//         System.out.print("Enter a String: ");

//         String str = sc.nextLine();
//         removeDuplicates(str, 0, "");

//     }

//     public static void removeDuplicates(String str, int ind, String newString) {

//         // base case
//         if (ind == str.length()) {
//             System.out.println(newString);
//             return;
//         }

//         char currChar = str.charAt(ind);

//         if (map[currChar - 'a'] == true) {
//             removeDuplicates(str, ind + 1, newString);
//         } else {
//             newString += currChar;
//             map[currChar - 'a'] = true;
//             removeDuplicates(str, ind + 1, newString);
//         }

//     }

// }

// import java.util.Scanner;

// public class EighteenClass {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         // Problem: Print all the subsequences of a string
//         System.out.print("Enter a String: ");

//         String str = sc.nextLine();
//         subsequences(str, 0, "");

//     }

//     public static void subsequences(String str, int ind, String newString) {

//         // base case
//         if (ind == str.length()) {
//             System.out.println(newString);
//             return;
//         }
//         char currChar = str.charAt(ind);
//         // choose the character
//         subsequences(str, ind + 1, newString + currChar);

//         // not choose the character
//         subsequences(str, ind + 1, newString);
//     }

// }

// import java.util.HashSet;
// import java.util.Scanner;

// public class EighteenClass {

//     public static void main(String[] args) {
//         // create a hashSet
//         HashSet<String> set = new HashSet<>();

//         Scanner sc = new Scanner(System.in);

//         // Problem: Print all the UNIQUE subsequences of a string
//         System.out.print("Enter a String: ");

//         String str = sc.nextLine();
//         Uniquesubsequences(str, 0, "", set);

//     }

//     public static void Uniquesubsequences(String str, int ind, String newString, HashSet<String> set) {

//         // base case
//         if (ind == str.length()) {
//             if (set.contains(newString)) {
//                 return;
//             } else {
//                 System.out.println(newString);
//                 set.add(newString);
//                 return;
//             }
//         }
//         char currChar = str.charAt(ind);
//         // choose the character
//         Uniquesubsequences(str, ind + 1, newString + currChar, set);

//         // not choose the character
//         Uniquesubsequences(str, ind + 1, newString, set);
//     }

// }

import java.util.HashSet;
import java.util.Scanner;

public class EighteenClass {
    public static String[] keypad = { ".", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz" };

    public static void main(String[] args) {
        // Scanner sc = new Scanner(System.in);
        // Problem: Print Keypad Combination

        String str = "23";
        // String str = sc.nextLine();
        printComb(str, 0, "");

    }

    // new fucntion
    public static void printComb(String str, int ind, String combination) {
        // base case
        if (ind == str.length()) {
            System.out.println(combination);
            return;
        }
        char currChar = str.charAt(ind);
        /*
         * Here delete '0'
         * That indicates to access all character
         * when we go 2nd index that means here "def"
         * def is a single string but we need to access every single character
         * So we delete '0' to acess every single character
         */
        String mapping = keypad[currChar - '0'];

        for (int i = 0; i < mapping.length(); i++) {
            printComb(str, ind + 1, combination + mapping.charAt(i));
        }
    }
}
