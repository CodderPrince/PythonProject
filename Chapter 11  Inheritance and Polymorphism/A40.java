// 11.40

package application;

public class A40 {
	// Protected fields and methods
	protected int i = 42; // Accessible to subclasses even in different packages

	protected void m() {
		System.out.println("Method m in class A40");
	}

	public static void main(String[] args) {
		// Creating an object of A40 to test the protected members within the same class
		A40 obj = new A40();
		System.out.println("Value of i: " + obj.i); // Accessible within the same class
		obj.m(); // Accessible within the same class
	}
}
