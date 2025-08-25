//9.18

package application;

public class Test1 {
	int count; // Instance variable

	public static void main(String[] args) { // main method must be static
		// Example logic for the main method
		Test1 Test1 = new Test1(); // Create an object to use getCount
		System.out.println("Count: " + Test1.getCount());
		System.out.println("Factorial of 5: " + factorial(5)); // Directly call static method
	}

	public int getCount() { // Instance method
		return count;
	}

	public static int factorial(int n) { // Static method
		int result = 1;
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		return result;
	}
}