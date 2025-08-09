
import java.util.*;

public class rectangle {

    public static void main(String[] args) {

        //create scanner class for user input
        Scanner sc = new Scanner(System.in);

        //from user input
        System.out.print("Enter width for Rectangle 1: ");
        double width1 = sc.nextDouble();

        System.out.print("Enter height for Rectangle 1: ");
        double height1 = sc.nextDouble();

        //for rectangle 1
        //step1: create object
        rectangle rectangle1 = new rectangle(width1, height1);
        //print section
        System.out.println("Rectangle 1: ");
        System.out.println("Width 1: " + rectangle1.width);
        System.out.println("Height 1: " + rectangle1.height);

        //called function for calculate area1
        System.out.println("Area 1: " + rectangle1.Area());
        //called function for calculate perimeter1
        System.out.println("Perimeter 1: " + rectangle1.Perimeter());

        //for rectangle 2
        //step 1: create object
        rectangle rectangle2 = new rectangle();

        //print section
        System.out.println();
        System.out.print("Enter width for Rectangle 2: ");
        double width2 = sc.nextDouble();
        System.out.print("Enter the height 2: ");
        double height2 = sc.nextDouble();

        //called function for calculate area2
        System.out.println("Area 2: " + rectangle2.Area());
        //called function for calculate perimeter
        System.out.println("Perimeter 2: " + rectangle2.Perimeter());

        //for default constructor
        rectangle rectangle3 = new rectangle();

        System.out.println();
        System.out.println("Rectangle 3: (Default Constructor)");
        System.out.println("Default Width: " + rectangle3.width);
        System.out.println("Default Height: " + rectangle3.height);

        System.out.println("Default Area: " + rectangle3.Area());
        System.out.println("Default Perimeter: " + rectangle3.Perimeter());
    }

    //initialize two global value
    double width;
    double height;

    //No arguments constructor that sets default values
    rectangle() {
        this.width = 1.0;
        this.height = 1.0;
    }

    //Constructor with specified width and height
    public rectangle(double width, double height) {
        this.width = width;
        this.height = height;
    }

    //create area function
    double Area() {
        return width * height;
    }

    //create perimeter function
    double Perimeter() {
        return 2 * (width + height);
    }

}
