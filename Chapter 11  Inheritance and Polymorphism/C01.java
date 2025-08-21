// 11.4 b

package application;

/*
 * class A01 {
 * public A01(int x) {
 * }
 * }
 * 
 * class B01 extends A01 {
 * public B01() {
 * }
 * }
 * 
 * public class C01 {
 * public static void main(String[] args) {
 * B01 b = new B01();
 * }
 * }
 */

class A01 {
	public A01(int x) {// constructor
		System.out.println("This is work!\n" + "Value is: " + x);

	}
}

class B01 extends A01 {
	public B01() {// constructor
		super(10); // Explicitly calling A's parameterized constructor
	}
}

public class C01 {
	public static void main(String[] args) {
		B01 b = new B01();// instance
	}
}