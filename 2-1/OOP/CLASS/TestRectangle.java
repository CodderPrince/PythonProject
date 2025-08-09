import java.util.Scanner;

// Define the Rectangle class
class Rectangle {
    double width;
    double height;

    // No-arg constructor that sets default values
    Rectangle() {
        this.width = 1.0;
        this.height = 1.0;
    }

    // Constructor with specified width and height
    Rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    // Method to calculate and return the area of the rectangle
    double getArea() {
        return width * height;
    }

    // Method to calculate and return the perimeter of the rectangle
    double getPerimeter() {
        return 2 * (width + height);
    }
}

// Main class to test the Rectangle class
public class TestRectangle {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Ask user for width and height for the first rectangle
        System.out.print("Enter width for Rectangle 1: ");
        double width1 = input.nextDouble();
        System.out.print("Enter height for Rectangle 1: ");
        double height1 = input.nextDouble();

        // Create a Rectangle object with user input for width and height
        Rectangle rectangle1 = new Rectangle(width1, height1);
        System.out.println("Rectangle 1:");
        System.out.println("Width: " + rectangle1.width);
        System.out.println("Height: " + rectangle1.height);
        System.out.println("Area: " + rectangle1.getArea());
        System.out.println("Perimeter: " + rectangle1.getPerimeter());
        System.out.println();

        // Ask user for width and height for the second rectangle
        System.out.print("Enter width for Rectangle 2: ");
        double width2 = input.nextDouble();
        System.out.print("Enter height for Rectangle 2: ");
        double height2 = input.nextDouble();

        // Create another Rectangle object with user input for width and height
        Rectangle rectangle2 = new Rectangle(width2, height2);
        System.out.println("Rectangle 2:");
        System.out.println("Width: " + rectangle2.width);
        System.out.println("Height: " + rectangle2.height);
        System.out.println("Area: " + rectangle2.getArea());
        System.out.println("Perimeter: " + rectangle2.getPerimeter());
        System.out.println();

        // Create a Rectangle object using the default constructor
        Rectangle rectangle3 = new Rectangle();  // This uses the no-arg constructor
        System.out.println("Rectangle 3 (default constructor):");
        System.out.println("Width: " + rectangle3.width);
        System.out.println("Height: " + rectangle3.height);
        System.out.println("Area: " + rectangle3.getArea());
        System.out.println("Perimeter: " + rectangle3.getPerimeter());
        
        input.close();  // Close the scanner to avoid resource leaks
    }
}
