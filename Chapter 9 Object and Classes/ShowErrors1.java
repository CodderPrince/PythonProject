/*
 * 9.11 b
 */
package application;

/*public class ShowErrors1 {

	public static void main(String[] args) {
		ShowErrors1 t = new ShowErrors1(); // Creates an object
		t.x(); // Calls the x() method
	}
}*/

public class ShowErrors1 {
	// Define the method x()
	public void x() {
		System.out.println("Method x() is called.");
	}

	public static void main(String[] args) {
		ShowErrors1 t = new ShowErrors1(); // Creates an object
		t.x(); // Calls the x() method
	}
}