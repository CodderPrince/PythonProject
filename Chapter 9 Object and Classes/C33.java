
// 9.33

/*
 * public class C33 {
 * 
 * private int p;
 * 
 * // No-arg constructor
 * public C33() {
 * System.out.println("C's no-arg constructor invoked");
 * this(0); // Must be the first statement
 * 
 * }
 * 
 * // Parameterized constructor
 * public C33(int p) {
 * p = p; // Use 'this' to refer to the instance variable
 * }
 * 
 * // Setter method
 * public void setP(int p) {
 * p = p; // Use 'this' to refer to the instance variable
 * }
 * }
 */

package application;

public class C33 {
	private int p;

// No-arg constructor
	public C33() {
		this(0); // Must be the first statement
		System.out.println("C's no-arg constructor invoked!");
	}

// Parameterized constructor
	public C33(int p) {
		this.p = p; // Use 'this' to refer to the instance variable
	}

// Setter method
	public void setP(int p) {
		this.p = p; // Use 'this' to refer to the instance variable
	}

	// until create main function it doesn't run
	public static void main(String[] args) {
		C33 obj1 = new C33(); // Invokes no-arg constructor

	}
}
