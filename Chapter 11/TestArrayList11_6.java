/*
 * 11.6
 */

import java.util.ArrayList;
import java.util.Date;
import java.util.Scanner;

// Loan class with a basic implementation
class Loan {
    private double loanAmount;
    private double interestRate;

    public Loan(double loanAmount, double interestRate) {
        this.loanAmount = loanAmount;
        this.interestRate = interestRate;
    }

    @Override
    public String toString() {
        return "Loan[Amount: $" + loanAmount + ", Interest Rate: " + interestRate + "%]";
    }
}

// Circle class with a basic implementation
class Circle {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public String toString() {
        return "Circle[Radius: " + radius + "]";
    }
}

public class TestArrayList11_6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<Object> list = new ArrayList<>();

        // Taking user input for Loan object
        System.out.print("\nEnter loan amount: $ ");
        double loanAmount = scanner.nextDouble();
        System.out.print("Enter interest rate (in %): ");
        double interestRate = scanner.nextDouble();
        list.add(new Loan(loanAmount, interestRate));

        // Adding current Date object
        list.add(new Date());

        // Taking user input for a String
        scanner.nextLine();  // Clear the buffer
        System.out.print("Enter a string message: ");
        String userString = scanner.nextLine();
        list.add(userString);

        // Taking user input for Circle object
        System.out.print("Enter circle radius: ");
        double radius = scanner.nextDouble();
        list.add(new Circle(radius));

        // Displaying each element in the list
        System.out.println("\nDisplaying all elements in the list:");
        for (Object obj : list) {
            System.out.println(obj.toString());
        }
        System.out.println();

        scanner.close();
    }
}
