/*
 * 11.23
 * 
 */

package application;

public class Test08 {
	public static void main(String[] args) {
		new A05();
		new B06();
	}
}

class A05 {
	int i = 7;

	public A05() {
		setI(20);
		System.out.println("i from A is " + i);
	}

	public void setI(int i) {
		this.i = 2 * i;
	}
}

class B06 extends A05 {
	public B06() {
		System.out.println("i from B is " + i);
	}

	@Override
	public void setI(int i) {
		this.i = 3 * i;
	}
}