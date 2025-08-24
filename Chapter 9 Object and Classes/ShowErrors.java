/*
 * 9.11 a
 */
package application;

/*
 * public class ShowErrors 
 * { public static void main(String[] args) { ShowErrors
 * t = new ShowErrors(5); }
 * }
 */
public class ShowErrors {
	// Constructor with an integer parameter
	public ShowErrors(int num) {
		System.out.println("Constructor called with number: " + num);
	}

	public static void main(String[] args) {
		ShowErrors t = new ShowErrors(5); // Calls the constructor with argument 5
	}
}