// 9.34

/*
 * publicclass Test {
 * privateint id;
 * publicvoid m1() {
 * this.id = 45;
 * }
 * publicvoid m2() {
 * Test.id = 45;
 * }
 * }
 */

package application;

public class Test14 {
	private int id; // Instance variable to store 'id'

	// Method to set 'id' using 'this'
	public void m1() {
		this.id = 45; // Valid usage of 'this' to set the instance variable
	}

	// Corrected method to modify 'id'
	public void m2() {
		this.id = 45; // Assign a new value to 'id' using 'this'
	}

	// Main function
	public static void main(String[] args) {
		// Create two instances (objects) of Test14
		Test14 obj1 = new Test14();
		Test14 obj2 = new Test14();

		// Call m1 and m2 methods on obj1 to set 'id'
		obj1.m1(); // Sets id to 45
		obj2.m2(); // Sets id to 45

		// Print the updated 'id' values for obj1
		System.out.println("obj1 id = " + obj1.id); // Access 'id' directly within the same class

		// For obj2, since no methods are called, id remains 0 (default value for int)
		System.out.println("obj2 id = " + obj2.id); // Prints 0
	}
}
