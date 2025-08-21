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

public class Test10 {

	public static void main(String[] args) {
		Object fruit = new Apple(); // Instantiate as Apple
		Object apple = (Apple) fruit; // Valid cast
	}
}

class Apple extends Fruit {
}

class Fruit {
}