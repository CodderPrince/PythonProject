// // problem number 1
// // import java.util.Scanner;

// // public class SeventeenClass {
// //     // new function
// //     public static void printNumber(int n) {
// //         // base case
// //         if (n == 0) {
// //             return;
// //         }
// //         System.out.println(n);
// //         printNumber(n - 1);
// //     }

// //     public static void main(String[] args) {
// //         Scanner sc = new Scanner(System.in);
// //         System.out.print("Enter a number: ");
// //         int n = sc.nextInt();
// //         printNumber(n);

// //     }

// // }

// import java.util.Scanner;

// public class SeventeenClass {
//     // public static void Number(int n, int current) {

//     // if (current > n) {
//     // return;
//     // }

//     // System.out.println(current);

//     // Number(n, current + 1);
//     // }

//     // public static int Sum(int n, int i, int sum) {
//     // // when our base case true then return the current sum
//     // if (i > n) {
//     // return sum;
//     // }
//     // // int sum=0;

//     // return Sum(n, i + 1, sum + i);
//     // // return;
//     // }

//     // public static int fact(int n) {
//     // // base case
//     // if (n <= 1) {
//     // return 1;
//     // } else {
//     // return n * fact(n - 1);
//     // }
//     // }

//     // fibonacci
//     // public static int fib(int n) {
//     // if (n <= 1) {
//     // return n;
//     // } else {
//     // return fib(n - 1) + fib(n - 2);
//     // }
//     // }

//     // // print fibonacci
//     // public static void fib(int n, int a, int b) {

//     // }

//     public static void main(String[] args) {
//         System.out.print("Enter a number: ");
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//         // Number(n, 1);

//         // sum of natural number
//         // int x = Sum(n, 1, 0);
//         // System.out.println(x);

//         // factorial of n
//         // System.out.println(fact(n));

//         // fibonacci
//         // int a=0,b=1;
//         // System.out.println(a);
//         // System.out.println(b);
//         // fib(n,a,b);

//         // public class FibonacciSeries {
//         // public static void main(String[] args) {
//         // int n = 10; // Number of Fibonacci numbers to generate
//         // for (int i = 0; i < n; i++) {
//         // System.out.print(fib(i) + " ");
//         // }
//         // }

//         // // Recursive method to calculate the Fibonacci number
//         // public static int fib(int n) {
//         // if (n <= 1) {
//         // return n;
//         // } else {
//         // return fib(n - 1) + fib(n - 2);
//         // }
//         // }
//         // }

//         for(int i=0;i<n;i++){
//             System.out.print(fib(i)+" ");
//         }

//     }

//     public static int fib(int n){

//     }
// }

// import java.util.Scanner;

// public class SeventeenClass {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.print("Enter a number: ");
//         int n = sc.nextInt();

//         // print fibonacci series by recursion
//         for (int i = 0; i < n; i++) {
//             System.out.print(fib(i) + " ");
//         }
//     }

//     public static int fib(int n) {
//         // base case
//         if (n <= 1) {
//             return n;
//         } else {
//             return fib(n - 1) + fib(n - 2);
//         }
//     }
// }

// //print x^n stack height = n
// import java.util.Scanner;

// public class SeventeenClass {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int x = 2, n = 5;
//         int ans = calPow(x, n);
//         System.out.println(ans);

//     }

//     public static int calPow(int x, int n) {
//         // base case 1
//         if (x == 0) {
//             return 0;
//         }
//         if (n == 0) {
//             return 1;
//         }
//         // calculate x, n-1 term
//         int xPownm1 = calPow(x, n - 1);
//         int xPown = x * xPownm1;
//         return xPown;
//     }

// }

//print x^n stack height = logn
import java.util.Scanner;

public class SeventeenClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 2, n = 5;
        int ans = calPow(x, n);
        System.out.println(ans);

    }

    public static int calPow(int x, int n) {
        // base case 1
        if (x == 0) {
            return 0;
        }
        if (n == 0) {
            return 1;
        }
        // when n is even
        if (n % 2 == 0) {
            return calPow(x, n / 2) * calPow(x, n / 2);
        } else {
            // when n is odd
            return calPow(x, n / 2) * calPow(x, n / 2) * x;
        }
    }

}
