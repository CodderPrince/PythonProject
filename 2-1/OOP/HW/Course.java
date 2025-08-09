import java.util.ArrayList;
import java.util.Scanner;

public class Course {
    private String courseName;
    private ArrayList<String> students;

    // Constructor
    public Course(String courseName) {
        this.courseName = courseName;
        this.students = new ArrayList<>();
    }

    // Method to add a student
    public void addStudent(String student) {
        students.add(student);
    }

    // Method to get the list of students
    public ArrayList<String> getStudents() {
        return students;
    }

    // Method to get the number of students
    public int getNumberOfStudents() {
        return students.size();
    }

    // Method to get the course name
    public String getCourseName() {
        return courseName;
    }

    // Method to drop a student
    public void dropStudent(String student) {
        students.remove(student);
    }

    // Main method to run the program
    public static void main(String[] args) {
        // Create a Course object
        Course javaCourse = new Course("Java Programming");

        // Create a Scanner object for input
        Scanner scanner = new Scanner(System.in);

        // Adding students to the course
        System.out.println("Enter the number of students you want to add:");
        int numStudents = scanner.nextInt();
        scanner.nextLine();  // Consume the newline left by nextInt()

        for (int i = 0; i < numStudents; i++) {
            System.out.println("Enter student name:");
            String studentName = scanner.nextLine();
            javaCourse.addStudent(studentName);
        }

        // Displaying the course information
        System.out.println("\nCourse Name: " + javaCourse.getCourseName());
        System.out.println("Number of students: " + javaCourse.getNumberOfStudents());
        System.out.println("List of students: " + javaCourse.getStudents());

        // Drop a student from the course
        System.out.println("\nEnter the name of the student to drop:");
        String studentToDrop = scanner.nextLine();
        javaCourse.dropStudent(studentToDrop);

        // Displaying the updated list of students
        System.out.println("\nUpdated list of students after drop:");
        System.out.println("Number of students: " + javaCourse.getNumberOfStudents());
        System.out.println("List of students: " + javaCourse.getStudents());

        scanner.close();
    }
}
