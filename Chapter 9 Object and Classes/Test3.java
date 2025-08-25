//9.24

package application;

public class Test3 {
	public static void main(String[] args) {
		CircleObject CircleObject1 = new CircleObject(1); // Create CircleObject with radius 1
		CircleObject CircleObject2 = new CircleObject(2); // Create CircleObject with radius 2

		// Attempt to swap references (no effect)
		swap1(CircleObject1, CircleObject2);
		System.out.println("After swap1: Circle1 = " + CircleObject1.radius + " Circle2 = " + CircleObject2.radius);

		// Swap the radius values (effect persists)
		swap2(CircleObject1, CircleObject2);
		System.out.println("After swap2: Circle1 = " + CircleObject1.radius + " Circle2 = " + CircleObject2.radius);
	}

	public static void swap1(CircleObject x, CircleObject y) {
		CircleObject temp = x;
		x = y;
		y = temp;
	}

	public static void swap2(CircleObject x, CircleObject y) {
		double temp = x.radius;
		x.radius = y.radius;
		y.radius = temp;
	}
}

class CircleObject {
	double radius;

	CircleObject(double newRadius) {
		radius = newRadius;
	}
}