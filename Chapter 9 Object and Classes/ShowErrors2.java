/*
 * 9.11 c
 */
package application;

/*public class ShowErrors22 {
	public void method1() {
		Circle2 c;
		System.out.println("What is radius: " + c.getRadius());
		c = new Circle2();
	}
}*/

//Circle2 class not initilized
//getRedius function not initialized before
//Define the Circle2 class 

class Circle2 {
	private double radius;

	// Constructor
	public Circle2() {
		this.radius = 8.0; // Default radius
	}

	// Method to get the radius
	public double getRadius() {
		return radius;
	}
}

//Main class 
public class ShowErrors2 {
	public void method1() {
		Circle2 c = new Circle2(); // Initialize the object before use
		System.out.println("What is radius: " + c.getRadius());
	}

	public static void main(String[] args) {
		// create object of ShowErrors2 function
		ShowErrors2 ShowErrors2 = new ShowErrors2();
		ShowErrors2.method1(); // Call method1
	}
}

/*Check that showerrors a class only
 * inner class there is no main function
 * 
 * so
 * 1. first create main function
 * 2. create those class object
 * 3. called the method throw that class
 */
