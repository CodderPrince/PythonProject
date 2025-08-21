// 11.35

package application;

import java.util.ArrayList;
import java.util.Arrays;

public class list2 {
	public static void main(String[] args) {

		// Step 1: Convert primitive int[] to Integer[]
		Integer[] integerArray = { 3, 5, 95, 4, 15, 34, 3, 6, 5 };

		// Step 2: Use Arrays.asList() to create a List
		ArrayList<Integer> list = new ArrayList<>(Arrays.asList(integerArray));

		// Display the ArrayList
		System.out.println(list);
	}
}