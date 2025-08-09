import java.util.Scanner;

public class thirdClass {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        /*
         * int a = sc.nextInt();
         * if(a>18)
         * {
         * System.out.println("Adult");
         * }
         * else
         * {
         * System.out.println("Not Adult");
         * }
         */
        /*
         * int x;
         * System.out.print("Enter a number: ");
         * x = sc.nextInt();
         * 
         * if (x % 2 == 0) {
         * System.out.println("Even");
         * } else if (x < 0) {
         * System.out.println("Negative");
         * } else {
         * System.out.println("None");
         * }
         */

        int button = sc.nextInt();
        switch (button) {
            case 1:
                System.out.println("Hello");
                break;
            case 2:
                System.out.println("Hi");
                break;
            case 30:
                System.out.println("Assalamu Alaikum");
                break;
            default:
                System.out.println("Invalid Button");
        }

    }

}
