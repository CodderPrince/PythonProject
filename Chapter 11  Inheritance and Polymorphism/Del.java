// 11.33

package application;

import java.util.ArrayList;

public class Del {
	public static void main(String[] args) {
		ArrayList<Integer> list = new ArrayList<>();
		list.add(1);
		list.add(2);
		list.add(3);

		// Remove the value '1' from the list
		list.remove((Integer) 1);

		System.out.println(list); // Output: [2, 3]

		// again add 1
		list.add(1);

		// now delete the index
		list.remove(1);// delete index 1 val = 3
		System.out.println(list); // Output: [2, 1]
	}
}