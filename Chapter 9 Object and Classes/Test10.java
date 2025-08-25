// 9.26 c

package application;

import java.util.Date;

public class Test10 {
	public static void main(String[] args) {
		Date date = new Date(1234567); // Initialize a Date object with a specific time

		m1(date); // Pass the reference to the method

		// Print the updated time of the Date object
		System.out.println(date.getTime()); // Output: 7654321
	}

	public static void m1(Date date) {
		// Mutate the state of the object by setting a new time
		date.setTime(7654321);
	}
}
/*
 * getter and setter method
 */
/*
 * 41
 */