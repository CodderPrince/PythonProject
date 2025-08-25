// 9.31

/*
 * public class Test12 {
 * public static void main(String[] args) {
 * // Create an array of Date objects
 * java.util.Date[] dates = new java.util.Date[10];
 * // Access and print the first element
 * System.out.println(dates[0]); // Prints the Date object
 * System.out.println(dates[0].toString());
 * // Prints the String representation of the Date object
 * }
 * }
 */

package application;

public class Test13 {
	private static int i = 0;
	private static int j = 0;

	public static void main(String[] args) {
		int i = 2;
		int k = 3;
		{
			int j = 3;
			System.out.println("i + j is " + i + j);
		}

		k = i + j;
		System.out.println("k is " + k);
		System.out.println("j is " + j);
	}
}