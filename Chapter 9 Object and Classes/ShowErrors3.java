/*
 * 9.11 d
 */
package application;

/*// Main class
public class ShowErrors3 {
	public static void main(String[] args) {
		C c = new C(5.0);
		System.out.println(c.value);
	}
}

class C {
	int value = 2;
}*/

public class ShowErrors3 {
	public static void main(String[] args) {
		C c = new C(5.0); // Create an object with a double argument
		System.out.println(c.value); // Print the value
	}
}

class C {
	int value = 3; // Default value

	// Parameterized constructor
	public C(double d) {
		// Do not change the value in the constructor
		// This ensures the default value remains
	}
}

/*
 * check that under application package all files created
 * so that there is no option to create same class name
 * if those class are different file but compiler confused
 * if you need to use another class just simply use it
 * in java it is ensure that under one package all types of 
 * classes are used one code to another code
 * 
 */
