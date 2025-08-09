/*
 * September 29, 2024
 * Sunday, 12:00 pm
 */

import java.util.Scanner;

public class Sep29 {

    // Create a class
    static class Student {

        int id;
        int reg;
        String name;

        // Constructor
        Student(int id, int reg, String name) {
            this.id = id;
            this.reg = reg;
            this.name = name;
        }
    }

    // Create print function
    public static void print(Student student) {
        System.out.println("Student Details:");
        System.out.println("ID: " + student.id);
        System.out.println("Registration: " + student.reg);
        System.out.println("Name: " + student.name);
    }

    public static void main(String[] args) {

        //object
        Scanner sc = new Scanner(System.in);

        // Read input for ID and registration
        System.out.print("Enter an ID: ");
        int id = sc.nextInt();

        System.out.print("Enter registration: ");
        int reg = sc.nextInt();

        //sc.nextLine();
        // Read input for name
        System.out.print("Enter name: ");
        String name = sc.nextLine();

        // Create a new Student object
        Student student = new Student(id, reg, name);

        // Call the print function
        print(student);

        sc.close();
    }
}
