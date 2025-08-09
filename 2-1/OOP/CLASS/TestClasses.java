import java.util.Date;

// Class to represent a date with year, month, and day
class MyDate {
    private int year;
    private int month;
    private int day;

    // Constructor to initialize year, month, and day
    public MyDate(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    // Override toString to format date as "year/month/day"
    @Override
    public String toString() {
        return year + "/" + month + "/" + day;
    }
}

// Base class Person with common attributes
class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String emailAddress;

    // Constructor to initialize name, address, phone number, and email
    public Person(String name, String address, String phoneNumber, String emailAddress) {
        this.name = name;
        this.address = address;
        this.phoneNumber = phoneNumber;
        this.emailAddress = emailAddress;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Override toString to display class name and person's name
    @Override
    public String toString() {
        return "Class: Person, Name: " + name;
    }
}

// Student class, subclass of Person, with additional status attribute
class Student extends Person {
    // Constants representing possible student statuses
    public static final String FRESHMAN = "Freshman";
    public static final String SOPHOMORE = "Sophomore";
    public static final String JUNIOR = "Junior";
    public static final String SENIOR = "Senior";

    private String status; // Stores the student's status

    // Constructor to initialize all attributes, including status
    public Student(String name, String address, String phoneNumber, String emailAddress, String status) {
        super(name, address, phoneNumber, emailAddress);
        this.status = status;
    }

    // Override toString to display class name and student's name
    @Override
    public String toString() {
        return "Class: Student, Name: " + getName();
    }
}

// Employee class, subclass of Person, with additional office, salary, and date
// hired
class Employee extends Person {
    private String office; // Stores office location
    private double salary; // Stores salary
    private MyDate dateHired; // Stores date hired as a MyDate object

    // Constructor to initialize all attributes, including office, salary, and date
    // hired
    public Employee(String name, String address, String phoneNumber, String emailAddress, String office, double salary,
            MyDate dateHired) {
        super(name, address, phoneNumber, emailAddress);
        this.office = office;
        this.salary = salary;
        this.dateHired = dateHired;
    }

    // Override toString to display class name and employee's name
    @Override
    public String toString() {
        return "Class: Employee, Name: " + getName();
    }
}

// Faculty class, subclass of Employee, with additional office hours and rank
class Faculty extends Employee {
    private int officeHours; // Stores office hours
    private String rank; // Stores faculty rank

    // Constructor to initialize all attributes, including office hours and rank
    public Faculty(String name, String address, String phoneNumber, String emailAddress, String office, double salary,
            MyDate dateHired, int officeHours, String rank) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.officeHours = officeHours;
        this.rank = rank;
    }

    // Override toString to display class name and faculty's name
    @Override
    public String toString() {
        return "Class: Faculty, Name: " + getName();
    }
}

// Staff class, subclass of Employee, with additional title attribute
class Staff extends Employee {
    private String title; // Stores job title

    // Constructor to initialize all attributes, including title
    public Staff(String name, String address, String phoneNumber, String emailAddress, String office, double salary,
            MyDate dateHired, String title) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.title = title;
    }

    // Override toString to display class name and staff's name
    @Override
    public String toString() {
        return "Class: Staff, Name: " + getName();
    }
}

// Test class to create instances of each class and display their information
public class TestClasses {
    public static void main(String[] args) {
        // Create instances of each class with sample data
        Person person = new Person("John Doe", "123 Main St", "555-1234", "john@example.com");
        Student student = new Student("Jane Doe", "456 College Ave", "555-5678", "jane@example.com", Student.SOPHOMORE);
        Employee employee = new Employee("Mike Smith", "789 Office Rd", "555-8765", "mike@example.com", "Office 101",
                50000, new MyDate(2023, 5, 15));
        Faculty faculty = new Faculty("Dr. Alice", "321 Campus Dr", "555-2345", "alice@example.edu", "Office 102",
                75000, new MyDate(2021, 8, 25), 10, "Professor");
        Staff staff = new Staff("Mr. Bob", "654 Admin St", "555-3456", "bob@example.com", "Admin Office", 40000,
                new MyDate(2020, 3, 10), "Administrator");

        // Display the toString output of each object
        System.out.println(person.toString());
        System.out.println(student.toString());
        System.out.println(employee.toString());
        System.out.println(faculty.toString());
        System.out.println(staff.toString());
    }
}
