// 11.39

package application;

public class B39 extends A39 {
	public static void main(String[] args) {
		B39 obj = new B39();

		// Accessing fields and methods from class A39
		System.out.println("Value of i: " + obj.i); // Accessible because of default access modifier
		obj.m(); // Accessible because of default access modifier
	}
}
