//9.17
package application;

public class F {
	int i; // Instance variable
	static String s; // Static variable

	// Instance method
	void imethod() {
		System.out.println("Instance method called");
	}

	// Static method
	static void smethod() {
		System.out.println("Static method called");
	}

	public static void main(String[] args) {
		// Creating an instance of F
		F f = new F();

		// Accessing instance and static variables/methods
		System.out.println(f.i); // Access instance variable
		System.out.println(f.s); // Access static variable
		f.imethod(); // Call instance method
		f.smethod(); // Call static method

		// Accessing variables/methods through the class
		// System.out.println(F.i); // Incorrect: Cannot access instance variable via
		// class

		System.out.println(F.s); // Correct: Access static variable via class
		// F.imethod(); // Incorrect: Cannot call instance method via class

		F.smethod(); // Correct: Call static method via class
	}
}

/*
 * Summary
 * 1. Cannot access or called a instance(f) by using class (F)
 * 2. Can access and called a static method by using class (F)
 */
