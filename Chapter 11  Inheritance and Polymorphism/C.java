// 11.4 a

package application;

class A {
	public A() {
		System.out.println("A's no-arg constructor is invoked");
	}
}

class B extends A {
}

// MAIN FUNCTION
public class C {
	public static void main(String[] args) {
		B b = new B();// instance
	}
}
