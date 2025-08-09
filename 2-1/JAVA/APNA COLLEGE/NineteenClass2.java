// import java.util.Scanner;

// public class NineteenClass2 {

//     //Problem no 1: Print all permutations of a string
//     // Function to generate permutations
//     public static void permutation(String str, int left, int right) {
//         // Base case
//         if (left == right) {
//             System.out.println(str);
//         } else {
//             for (int i = left; i <= right; i++) {
//                 str = swap(str, left, i);
//                 permutation(str, left + 1, right);
//             }
//         }
//     }

//     // Helper function to swap characters in a string
//     static String swap(String str, int left, int i) {
//         char[] charArray = str.toCharArray();
//         char temp = charArray[left];
//         charArray[left] = charArray[i];
//         charArray[i] = temp;
//         return String.valueOf(charArray);
//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a String: ");
//         String str = sc.nextLine();
//         int right = str.length() - 1;

//         // Call the function
//         permutation(str, 0, right);
//     }
// }

// import java.util.Scanner;

// public class NineteenClass2 {

//     // Problem no 2: Count total paths in a maze to move from(0,0) to (n,m)

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of n: ");
//         int n = sc.nextInt();
//         System.out.print("Enter the number of m: ");
//         int m = sc.nextInt();

//         // Call the function
//         int totalPaths = countPaths(0, 0, n, m);
//         System.out.println("Total paths: " + totalPaths);
//     }

//     public static int countPaths(int i, int j, int n, int m) {

//         // base case 1
//         if (i == n || j == m) {
//             return 0;
//         }

//         // base case 2
//         if (i == n - 1 && j == m - 1) {
//             return 1;
//         }

//         // move downwards
//         int downPaths = countPaths(i + 1, j, n, m);

//         // move right
//         int rightPaths = countPaths(i, j + 1, n, m);

//         return downPaths + rightPaths;
//     }
// }

// import java.util.Scanner;

// public class NineteenClass2 {

//     // Problem no 3: Place tiles of size 1 X m in a floor of size n X m

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of n: ");
//         int n = sc.nextInt();
//         System.out.print("Enter the number of m: ");
//         int m = sc.nextInt();

//         // Call the function
//         int totalPaths = placeTiles(n, m);
//         System.out.println("Total paths: " + totalPaths);
//     }

//     public static int placeTiles(int n, int m) {

//         // base case 1
//         if (n == m) {
//             return 2;

//         }

//         // base case 2
//         if (n < m) {
//             return 1;
//         }

//         // vertically
//         int vertPlacement = placeTiles(n - m, m);

//         // horizontally
//         int horPlacement = placeTiles(n - 1, m);

//         return vertPlacement + horPlacement;

//     }
// }

// import java.util.Scanner;

// public class NineteenClass2 {

//     // Problem no 4: Find the number of ways in which you can
//     // invite n people to your party, single or in pairs

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter the number of n: ");
//         int n = sc.nextInt();

//         // Call the function
//         System.out.println("Total Ways: " + callGuest(n));
//     }

//     public static int callGuest(int n) {

//         // base case
//         if (n <= 1) {
//             return 1;
//         }
//         // single
//         int ways1 = callGuest(n - 1);

//         // pair
//         int ways2 = (n - 1) * callGuest(n - 2);

//         return ways1 + ways2;

//     }
// }

import java.util.ArrayList;
import java.util.Scanner;

public class NineteenClass2 {

    // Problem no 5: Print all the subsets of a set of
    // first n natural numbers
    public static void main(String[] args) {
        // create an array
        ArrayList<Integer> subset = new ArrayList<>();

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of n: ");
        int n = sc.nextInt();

        // Call the function
        findSubsets(n, subset);
    }

    // recursive function
    public static void findSubsets(int n, ArrayList<Integer> subset) {

        // base case
        if (n == 0) {
            printSubset(subset);
            return;
        }
        // add element
        subset.add(n);
        findSubsets(n - 1, subset);

        // don't add this element so remove first
        // firstly when add this element is store at the last of array index
        subset.remove(subset.size() - 1);// last element
        findSubsets(n - 1, subset);
    }

    // print all subset
    public static void printSubset(ArrayList<Integer> subset) {
        for (int i = 0; i < subset.size(); i++) {
            System.out.print(subset.get(i) + " ");
        }
        System.out.println();
    }
}
