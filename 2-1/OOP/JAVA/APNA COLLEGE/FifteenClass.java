import java.util.Scanner;

public class FifteenClass {
    public static void main(String[] args) {
        // Bit Manipulation
        // Get Bit
        // Problem 1

        // take a number
        // ex 1
        // int n = 5;// 0101
        // int pos = 2;// take position
        // int bitMask = 1 << pos;
        // System.out.println(bitMask);

        // ex 2
        // int n = 16;
        // int pos = 5;
        // int bitMask = 1 << pos;

        // if ((bitMask & n) == 0) {
        // System.out.println("Bit was Zero");
        // } else {
        // System.out.println("Bit was One");
        // }

        // Set bit
        // int n = 5;// 0101
        // int pos = 1;
        // int bitMask = 1 << pos;// 0010

        // int newNumber = bitMask | n;
        // /*
        // * 0010
        // * 0101
        // * 0111 == 7 decimal
        // */
        // System.out.println(newNumber);

        // set bit
        // int n = 5;// 0101
        // int pos = 2;
        // int bitMask = 1 << pos;// 0100
        // // Set bit operation == AND with Not
        // // firstly create not operation (~)
        // int NOTbit = ~(bitMask);// 1011
        // int AndWithNot = NOTbit & n;
        // System.out.println(AndWithNot);

        // update operation
        int n = 5;
        int pos = 1;
        // update bit to 1 means set operation || update bit to 0 means Clear Operation
        System.out.print("Enter any number to update(0 or 1): ");
        Scanner sc = new Scanner(System.in);

        int operation = sc.nextInt();
        int bitMask = 1 << pos;

        if (operation == 1) {
            // set operation
            int newNumber = bitMask | n;
            System.out.println(newNumber);
        }

        else {
            // clear operation
            int not = ~bitMask;
            int newNumber = not & n;
            System.out.println(newNumber);
        }
    }

}
