// 11.5 a overrides

package application;

// Main class to test the functionality
public class Test01 {
	public static void main(String[] args) {
		// Create an instance of class A02
		A02 a = new A02(); // This creates an object of class A02, which extends B02

		// Call the 'p' method with an integer value
		a.p(10); // Since A02 overrides the 'p' method, the overridden version in A02 will be
				 // called

		// Call the 'p' method with a double value
		a.p(10.0); // Even for the double argument, the overridden method in A02 will be called
	}
}

// Parent class B02
class B02 {
	// Method 'p' in class B02 that takes a double argument
	public void p(double i) {
		// Prints the double value multiplied by 2
		System.out.println(i * 2);
	}
}

// Child class A02 that extends B02
class A02 extends B02 {
	// Overriding the 'p' method from the parent class B02
	// This method takes a double argument

	public void p(double i) {
		// Prints the double value directly
		System.out.println(i);
	}
}
