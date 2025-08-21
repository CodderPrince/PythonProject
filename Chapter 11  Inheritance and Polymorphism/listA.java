// 11.34

package application;

import java.util.ArrayList;

public class listA {
	public static void main(String[] args) {

		ArrayList<Double> list = new ArrayList<>();

		list.add(1.0); // Use a double literal

		// list.add(1);// wrong cause it's int
		System.out.println(list); // Output: [1.0]
	}
}