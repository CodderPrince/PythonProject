//11.19

package application;

public class CC {
	public static void main(String[] args) {
		CC obj = new CC(); // Create an instance to call method1
		obj.method1();// Called the method1
	}

	public void method1() { // Instance method
		method2(); // Call static method (allowed)
	}

	public static void method2() { // Static method
		Circle1 c = new Circle1(); // Define and initialize Circle inside this method
		System.out.println("What is radius: " + c.getRadius());
	}
}

// Example Circle class definition 
class Circle {
	private double radius = 5.0; // Default radius

	public double getRadius() {
		return radius;
	}
}
