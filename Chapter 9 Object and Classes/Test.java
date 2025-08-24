//9.12

package application;

class Test {
	public static void main(String[] args) {
		A a = new A(); // Use the no-argument constructor
		a.print();
	}
}

class A {
	String s;

	// No-argument constructor
	A() {
		s = "Default String"; // Initialize with a default value
	}

	// Parameterized constructor
	A(String newS) {
		s = newS;
	}

	public void print() {
		System.out.print(s);
	}

}
