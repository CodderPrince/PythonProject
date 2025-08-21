// 11.32

package application;

import java.util.ArrayList;

public class Main {
	public static void main(String[] args) {
		ArrayList<String> list = new ArrayList<>();
		list.add("Dallas");
		list.add("Dallas");
		list.add("Houston");
		list.add("Dallas");
		list.add("Dallas");

		// Correct way to remove all occurrences
		list.removeIf(item -> item.equals("Dallas"));

		System.out.println(list); // Output: [Houston]
	}
}