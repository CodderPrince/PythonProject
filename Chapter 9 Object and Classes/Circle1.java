//9.22

package application;

public class Circle1 {
	private double radius = 1; // Private variable

	/** Public accessor (getter) for radius */
	public double getRadius() {
		return radius;
	}

	/** Find the area of this circle */
	public double getArea() {
		return radius * radius * Math.PI;
	}

	public static void main(String[] args) {
		Circle1 myCircle = new Circle1();

		// Use the getter method to access the private radius
		System.out.println("Radius is " + myCircle.getRadius());
	}
}
