// 9.20

package application;

public class F01 {
	// Instance variable (field) 'x' declared at the class level
	// This variable is specific to each object of the class and has an initial
	// value of 0.
	private int x = 0;

	// Instance variable (field) 'y' declared at the class level
	// This variable is also specific to each object of the class and has an initial
	// value of 0.
	private int y = 0;

	// Default constructor
	public F01() {
		// The constructor does not modify the values of 'x' or 'y'.
		// Both retain their initial values: x = 0, y = 0.
	}

	// Method to demonstrate variable shadowing and accessing variables
	public void p() {
		// Local variable 'x' declared inside the method.
		// This local variable shadows the instance variable 'x' within this method.
		int x = 1;

		// Print the value of 'x':
		// Since there is a local variable 'x', it is used here.
		System.out.println("x = " + x); // Outputs: x = 1

		// Print the value of 'y':
		// Since there is no local variable 'y', the instance variable 'y' is used here.
		System.out.println("y = " + y); // Outputs: y = 0
	}

	// Main method to test the program
	public static void main(String[] args) {
		// Create an instance (object) of class F
		F01 f = new F01();

		// Call the method 'p()' on the instance 'f'
		// This will print the values of 'x' and 'y' based on the logic in the method.
		f.p();

		// Expected output:
		// x = 1 (local variable 'x' takes precedence over the instance variable)
		// y = 0 (instance variable 'y' is accessed because no local 'y' exists)
	}
}
