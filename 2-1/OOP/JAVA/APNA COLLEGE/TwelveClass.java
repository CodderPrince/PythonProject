import java.util.Scanner;

public class TwelveClass {
    public static void main(String[] args) {
        // String name = "Prince";
        // String fullName = "Md. An Nahian Prince";

        Scanner sc = new Scanner(System.in);

        // input String
        /*
         * String name1 = sc.nextLine();
         * System.out.println(name1);
         * String first = "An Nahian";
         * String last = "Prince";
         * String fullName1 = first + " " + last;
         * 
         * System.out.println(fullName1);
         * // string length
         * System.out.println(fullName1.length());
         * for (int i = 0; i < fullName1.length(); i++) {
         * System.out.print(fullName1.charAt(i) + " ");
         * }
         * // index length
         * System.out.println(fullName1.length());
         */

        // compare
        // String name1 = "Prince";
        // String name2 = "Prince";
        // String name3 = "Nahian";

        // // compare 1
        // System.out.println(name1.compareTo(name2));
        // // compare 2
        // System.out.println(name1.compareTo(name3));
        // // compare 3
        // System.out.println(name3.compareTo(name1));
        // if (new String("Prince") == new String("Prince")) {
        // System.out.println("Equal");
        // } else {
        // System.out.println("Not Equal");
        // }

        // Sub String
        String sentence = "My name is Nahian Prince";
        String name = sentence.substring(1);

        System.err.println(name);
    }

}
