/*
 * 11.27
 * 
 */

/*
 * package application;
 * 
 * public class Test10 {
 * 
 * public static void main(String[] args) {
 * Object fruit = new Fruit(); // Instantiate as Apple
 * Object apple = (Apple) fruit; // Valid cast
 * }
 * }
 * 
 * class Apple extends Fruit {
 * }
 * 
 * class Fruit {
 * }
 */
package application;

public class Test11 {
	public static void main(String[] args) {
		// Creating two Circle11 objects
		Circle11 circle1 = new Circle11();
		Circle11 circle2 = new Circle11();

		// Comparing both Circle11s using the equals method
		System.out.println(circle1.equals(circle2));  // Will call the equals method of Circle11

		// Case (b): Using correct equals method that compares radius values
		circle1.setRadius(5.0);
		circle2.setRadius(6.0);
		System.out.println(circle1.equals(circle2));  // Will output true if radius is the same
	}
}

class Circle11 {
	double radius;

	// Incorrect equals method (case a)
	public boolean equals(Circle11 circle) {
		return this.radius == circle.radius;
	}

	// Overriding the equals method from Object class
	@Override
	public boolean equals(Object obj) {
		// Check if the object is null or of a different class type
		if (obj == null || getClass() != obj.getClass()) {
			return false;
		}

		// Downcast to Circle11 to access the radius
		Circle11 circle = (Circle11) obj;
		return this.radius == circle.radius;
	}

	// Setter for radius (for case b)
	public void setRadius(double radius) {
		this.radius = radius;
	}
}
