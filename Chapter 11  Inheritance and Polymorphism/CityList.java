/*
 * 11.31
 */

package application;

import java.util.ArrayList;

public class CityList {
	public static void main(String[] args) {
		// Create an ArrayList to hold String elements
		ArrayList<String> list = new ArrayList<>();

		// Add elements to the list
		list.add("Denver");
		list.add("Austin");

		// list.add(new java.util.Date());

		list.add("Dallas"); // Add the element at index 2

		// Retrieve the element at index 0 and store it in a variable
		String city = list.get(0); // "Denver"

		// Modify the element at index 2
		list.set(2, "New York"); // Change "Dallas" to "New York"

		// Print the element at index 2 after modification
		System.out.println(list.get(2)); // "New York"
	}
}