// 11.5 b overloads

package application;

public class Test02 {

	// main function
	public static void main(String[] args) {
		A03 a = new A03();// instance/object
		a.p(10);// method as integer to go the integer part
		a.p(10.0);// method as double to go the double part
	}
}

class B03 {
	public void p(double i) {// double type method
		System.out.println(i * 2);
	}
}

class A03 extends B03 {
	// This method overrides the method in B
	public void p(int i) {// integer type method
		System.out.println(i);
	}
}