/*
 * 11.22
 * 
 */

package application;

public class Test09 {
	public static void main(String[] args) {
		A04 a = new A04(3);// instance
	}
}

class A04 extends B05 {
	public A04(int t) {
		System.out.println("A's constructor is invoked");
	}
}

class B05 {
	public B05() {
		System.out.println("B's constructor is invoked");
	}
}