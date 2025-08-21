// 11.39

package application;

public class A39 {
	int i = 80; // Default (package-private) and initialized for testing

	void m() {
		System.out.println("Method m in class A39");
	}

	public static void main(String[] args) {
		// Creating an instance of A39
		A39 obj = new A39();

		// Accessing the field and method
		System.out.println("Value of i: " + obj.i);
		obj.m();
	}
}
