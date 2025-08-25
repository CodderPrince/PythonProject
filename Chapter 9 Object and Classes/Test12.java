// 9.26 c

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

import java.util.Date;

public class Test12 {
	public static void main(String[] args) {
		// Create an array of Date objects
		java.util.Date[] dates = new java.util.Date[10];

		// Initialize each element of the array
		for (int i = 0; i < dates.length; i++) {
			dates[i] = new Date(); // Initialize with the current date and time
		}

		// Access and print the first element
		System.out.println(dates[0]); // Prints the Date object
		System.out.println(dates[0].toString());
		// Prints the String representation of the Date object
	}
}