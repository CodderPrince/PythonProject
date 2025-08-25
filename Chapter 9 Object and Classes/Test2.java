// 9.23

package application;

public class Test2 {
	public static void main(String[] args) {
		Count myCount = new Count(); // Create a Count object with default count = 1
		int times = 0; // Initialize primitive variable

		// Loop 100 times
		for (int i = 0; i < 100; i++) {
			increment(myCount, times); // Pass reference (myCount) and primitive (times)
		}

		// Output results
		System.out.println("count is " + myCount.count); // Reference type reflects changes
		System.out.println("times is " + times); // Primitive type remains unchanged
	}

	public static void increment(Count c, int times) {
		c.count++; // Modify the object (reference type)
		times++; // Modify the local copy of the primitive variable
	}
}

class Count {
	public int count;

	// Overloaded constructor
	public Count(int c) {
		count = c;
	}

	// Default constructor
	public Count() {
		count = 1;
	}
}

/*
 * initial cnt = 1 1. i = 0, cnt = 2 2. i = 1, cnt = 3 3. i = 2, cnt = 4 . . .
 * cnt is alltime +2 from i
 * 
 * 100. i = 99 cnt = 101
 * 
 * times is 0 cause it passes by copy
 */
