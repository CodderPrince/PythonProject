import java.util.ArrayList;
import java.util.Scanner;

public class Course11_5 {
    private String courseName;
    private ArrayList<String> students = new ArrayList<>();
    private int numberOfStudents;

    public Course11_5(String courseName) {
        this.courseName = courseName;
    }

    public void addStudent(String student) {
        students.add(student);
        numberOfStudents++;
    }

    public ArrayList<String> getStudentsList() {
        return students;
    }

    public int getNumberOfStudents() {
        return numberOfStudents;
    }

    public String getCourseName() {
        return courseName;
    }

    public void dropStudent(String student) {
        if (students.remove(student)) {
            numberOfStudents--;
        }
    }

    // Main method with user input
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Prompt user to enter the course name
        System.out.print("Enter course name: ");
        String courseName = scanner.nextLine();
        Course course = new Course(courseName);

        // Loop to add students
        while (true) {
            System.out.print("Enter a student's name to add (or type 'done' to finish): ");
            String studentName = scanner.nextLine();
            if (studentName.equalsIgnoreCase("done")) {
                break;
            }
            course.addStudent(studentName);
        }

        // Display course name
        System.out.println("\nCourse Name: " + course.getCourseName());

        // Display all students in ArrayList format
        System.out.println("Students enrolled: " + course.getStudentsList());

        // Display number of students
        System.out.println("Number of Students: " + course.getNumberOfStudents());

        // Prompt user to drop a student
        System.out.print("\nEnter a student's name to drop: ");
        String studentToDrop = scanner.nextLine();
        course.dropStudent(studentToDrop);

        // Display updated list of students in ArrayList format
        System.out.println("\nStudents enrolled after dropping " + studentToDrop + ": " + course.getStudentsList());

        // Display updated number of students
        System.out.println("Number of Students after dropping " + studentToDrop + ": " + course.getNumberOfStudents());

        scanner.close();
    }
}
