//9.26 a

package application;

import java.util.Date;

public class Test8 {
	public static void main(String[] args) {
		Date date = null; // Initialize a Date reference to null

		m1(date); // Pass the reference to the method

		// Print the value of date after the method call
		System.out.println(date); // Output: null
	}

	public static void m1(Date date) {
		// Reassign the local copy of the reference to a new Date object
		date = new Date();
	}
}
