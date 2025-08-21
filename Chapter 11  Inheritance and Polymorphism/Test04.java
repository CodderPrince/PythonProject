package application;

public class Circle03 {
	private double radius;

	public Circle03(double radius) {
		this.radius = radius;
	}

	public double getRadius() {
		return radius;
	}

	public double getArea() {
		return radius * radius * Math.PI;
	}
}

class B04 extends Circle03 {
	private double length;

	public B04(double radius, double length) {
		super(radius);
		this.length = length;
	}

	@Override
	public double getArea() {
		return super.getArea() * length;
	}
}

public class Test04 {
	public static void main(String[] args) {
		// Create a Circle03 object
		Circle03 circle = new Circle03(5.0);
		System.out.println("Circle Radius: " + circle.getRadius());
		System.out.println("Circle Area: " + circle.getArea());

		// Create a B04 object
		B04 cylinder = new B04(5.0, 10.0);
		System.out.println("Cylinder Radius: " + cylinder.getRadius());
		System.out.println("Cylinder Area: " + cylinder.getArea());
	}
}
