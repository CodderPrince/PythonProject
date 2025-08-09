
/*
//  (Geometry: n-sided regular polygon) In an n-sided regular polygon, all sides 
// have the same length and all angles have the same degree (i.e., the polygon is 
// both equilateral and equiangular). Design a class named RegularPolygon that 
// contains:
//  ■ A private int data field named n that defines the number of sides in the poly
// gon with default value 3.
//  ■ A private double data field named side that stores the length of the side with 
// default value 1.
//  ■ A private double data field named x that defines the x-coordinate of the poly
// gon’s center with default value 0.
//  ■ A private double data field named y that defines the y-coordinate of the poly
// gon’s center with default value 0.
//  ■ A no-arg constructor that creates a regular polygon with default values.
//  ■ A constructor that creates a regular polygon with the specified number of sides 
// and length of side, centered at (0, 0).
//  ■ A constructor that creates a regular polygon with the specified number of sides, 
// length of side, and x- and y-coordinates.
//  ■ The accessor and mutator methods for all data fields.
//  ■ The method getPerimeter() that returns the perimeter of the polygon.
//  ■ The method getArea() that returns the area of the polygon. 
// The formula for  = (n * s2) / ((4 * tan(pi / n))



// Draw the UML diagram for the class and then implement the class. 
// Write a java test  program that creates three RegularPolygon objects, created using the no-arg 
// constructor, using RegularPolygon(6, 4), and using 
// RegularPolygon(10, 4, 5.6, 7.8). For each object, display its perimeter and area.

 */


public class RegularPolygon {
    // Private data fields
    private int n;          // Number of sides
    private double side;    // Length of each side
    private double x;       // x-coordinate of the center
    private double y;       // y-coordinate of the center

    // No-arg constructor (default values)
    public RegularPolygon() {
        this.n = 3;
        this.side = 1;
        this.x = 0;
        this.y = 0;
    }

    // Constructor with number of sides and side length (centered at (0, 0))
    public RegularPolygon(int n, double side) {
        this.n = n;
        this.side = side;
        this.x = 0;
        this.y = 0;
    }

    // Constructor with number of sides, side length, and center coordinates x and y
    public RegularPolygon(int n, double side, double x, double y) {
        this.n = n;
        this.side = side;
        this.x = x;
        this.y = y;
    }

    // Accessor and mutator methods (getters and setters)

    //accessor for n
    public int getN() {
        return n;
    }

    //mutator for n
    public void setN(int n) {
        this.n = n;
    }

    //accessor for side
    public double getSide() {
        return side;
    }

    //mutator for side
    public void setSide(double side) {
        this.side = side;
    }

    //accessor for X
    public double getX() {
        return x;
    }

   //mutator for X
    public void setX(double x) {
        this.x = x;
    }

     //accessor for Y
    public double getY() {
        return y;
    }

    //mutator for Y
    public void setY(double y) {
        this.y = y;
    }

    // Method to calculate the perimeter of the polygon
    public double getPerimeter() {
        return n * side;
    }

    // Method to calculate the area of the polygon
    public double getArea() {
        return (n * side * side) / (4 * Math.tan(Math.PI / n));
    }

    // Main method to test the class
    public static void main(String[] args) {
        // Create three RegularPolygon objects using different constructors

        //create object with no constructors
        RegularPolygon polygon1 = new RegularPolygon();

        //create object with constructor n and side
        RegularPolygon polygon2 = new RegularPolygon(6, 4);

        //create object with constructor n, side, X and Y
        RegularPolygon polygon3 = new RegularPolygon(3, 2, 2, 3);

        // Display the perimeter and area of each polygon
        System.out.println("\nPolygon 1:");
        System.out.println("Perimeter: " + polygon1.getPerimeter());
        System.out.println("Area: " + polygon1.getArea());

        System.out.println("\nPolygon 2:");
        System.out.println("Perimeter: " + polygon2.getPerimeter());
        System.out.println("Area: " + polygon2.getArea());

        System.out.println("\nPolygon 3:");
        System.out.println("Perimeter: " + polygon3.getPerimeter());
        System.out.println("Area: " + polygon3.getArea() + "\n");
    }
}

// There is no usage of Co - ordinates for this problem