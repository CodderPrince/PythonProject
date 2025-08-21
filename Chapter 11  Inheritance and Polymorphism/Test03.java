/*
 * 11.20
 * Solution with Overloading:
 */

package application;

public class Test03 {
	public static void main(String[] args) {
		Integer[] list1 = { 12, 24, 55, 1 };
		Double[] list2 = { 12.4, 24.0, 55.2, 1.0 };
		int[] list3 = { 1, 2, 3 };

		printArray(list1); // Works fine
		printArray(list2); // Works fine
		printArray(list3); // Fixed using overloaded method
	}

	public static void printArray(Object[] list) {
		for (Object o : list) {
			System.out.print(o + " ");

		}
		System.out.println();
	}

	// Overloaded method for int[]
	public static void printArray(int[] list) {
		for (int i : list) {
			System.out.print(i + " ");
		}
		System.out.println();
	}
}