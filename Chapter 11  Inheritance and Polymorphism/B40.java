// 11.40

package application;

public class B40 extends A40 {
	public void m1() {
		// Accessing protected members from A40 in a different package
		System.out.println("Value of i: " + i); // Protected field, accessible
		m(); // Protected method, accessible
	}

	public static void main(String[] args) {
		B40 obj = new B40();
		obj.m1();
	}
}
