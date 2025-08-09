import java.util.Scanner;

public class ThirteenClass {
    public static void main(String[] args) {
        // String builder
        // StringBuilder sb = new StringBuilder("CSE");
        // // charAt
        // System.out.println(sb.charAt(0));// C

        // // setCharAt
        // /*
        // * In set character at index is not directly applicapale in print option
        // * firstly modified this then print
        // * it is not possible to print directly
        // * it is exceptional
        // */
        // sb.setCharAt(0, 'P');
        // System.out.println(sb);// PSE

        // // insert
        // System.out.println(sb.insert(0, 'M'));// MPSE

        // // delete
        // System.out.println(sb.delete(1, 2));// MSE

        // // append
        // System.out.println(sb.append('P'));// MSEP

        // // length
        // System.out.println(sb.length());// 4

        // Question 1: Reverse a String
        Scanner sc = new Scanner(System.in);
        String inputString = sc.nextLine();
        StringBuilder sb = new StringBuilder(inputString);
        for (int i = 0; i < sb.length() / 2; i++) {

            int front = i;
            int back = sb.length() - 1 - i;

            char frontChar = sb.charAt(front);
            char backChar = sb.charAt(back);

            // replace them
            sb.setCharAt(front, backChar);
            sb.setCharAt(back, frontChar);

        }
        System.out.println(sb);

    }

}
