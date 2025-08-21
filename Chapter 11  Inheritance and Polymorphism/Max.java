// 11.36

package application;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class Max {
	public static void main(String[] args) {

		// Step 1: Convert primitive int[] to Integer[]
		Integer[] integerArray = { 3, 5, 95, 4, 15, 34, 3, 6, 5 };

		// Step 2: Convert Integer[] to a List
		ArrayList<Integer> list = new ArrayList<>(Arrays.asList(integerArray));

		// Step 3: Find the max value using Collections.max()
		System.out.println(Collections.max(list));
	}
}
