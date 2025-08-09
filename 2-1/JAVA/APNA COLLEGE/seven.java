// import java.util.Scanner;

// public class SevenClass {
//     // create a new function
//     /*
//      * public static void printMyName(String Name) {
//      * System.out.println(Name);
//      * return;
//      * }
//      */

//     // create add Sum function
//     // public static void addSum() {
//     // // create scanner object
//     // // Scanner sc = new Scanner(System.in);

//     // // System.out.print("Enter the first integer: ");
//     // // int a = sc.nextInt();
//     // // System.out.print("Enter the Second integer: ");
//     // // int b = sc.nextInt();

//     // // sum of them
//     // int sum = a + b;
//     // System.out.println("Sum of two integers: " + sum);
//     // }

//     // create a new function for factorial
//     public static int factorial(int n) {
//         // base case
//         if (n == 0) {
//             return 1;
//         }
//         if (n > 1) {
//             return n * factorial(n - 1);
//         }
//     }

//     public static void main(String[] args) {
//         {
//             // create a scanner object
//             // Scanner sc = new Scanner(System.in);
//             // System.out.print("Enter the string: ");
//             // String Name = sc.nextLine();

//             // called the function you create
//             // printMyName(Name);

//             // addSum();

//             // factorial
//             System.out.print("Enter a number: ");
//             Scanner sc = new Scanner(System.in);
//             int n = sc.nextInt();
//             int fact = factorial(n);
//             System.out.println("Factorial : " + fact);
//         }

//     }

// }

import java.util.Scanner;

public class seven {

    public static int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        if (n > 0) {
            return n * factorial(n - 1);
        }
        return 1;
        // in java return statement is needed when we use return type int
    }

    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int fact = factorial(n);
        System.out.println("Factorial : " + fact);
        sc.close();
    }
}