/*
 * 11.20
 * Alternative with Conversion
 * If you prefer to convert int[] to Integer[]:
 */

package application;

import java.util.Arrays;

public class Test05 {
	public static void main(String[] args) {
		Integer[] list1 = { 12, 24, 55, 1 };
		Double[] list2 = { 12.4, 24.0, 55.2, 1.0 };

		int[] list3 = { 1, 2, 3 };

		printArray(list1); // Works fine
		printArray(list2); // Works fine

		// Convert int[] to Integer[]
		Integer[] list3Converted = Arrays.stream(list3).boxed().toArray(Integer[]::new);
		printArray(list3Converted); // Fixed with conversion

	}

	public static void printArray(Object[] list) {
		for (Object o : list) {
			System.out.print(o + " ");

		}
		System.out.println();
	}

}