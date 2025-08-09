
/*
 * 11.2
 * Output the full details of each Person and their Class
 * 
 */

// Class to represent hiring date
class MyDate {
    private int year;
    private int month;
    private int day;

    // Constructor for date
    public MyDate(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    // toString format for date
    public String toString() {
        return year + "/" + month + "/" + day;
    }
}

// Base class Person
class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String emailAddress;

    // Constructor for Person
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

    // toString method to display full details
    public String toString() {
        return "Class: Person\n" +
               "Name: " + name + "\n" +
               "Address: " + address + "\n" +
               "Phone Number: " + phoneNumber + "\n" +
               "Email Address: " + emailAddress + "\n";
    }
}

// Student class that is a subclass of Person
class Student extends Person {
    public static final String FRESHMAN = "Freshman";
    public static final String SOPHOMORE = "Sophomore";
    public static final String JUNIOR = "Junior";
    public static final String SENIOR = "Senior";

    private String status;

    // Constructor for Student
    public Student(String name, String address, String phoneNumber, String emailAddress, String status) {
        super(name, address, phoneNumber, emailAddress);
        this.status = status;
    }

    // toString method to display full details
    public String toString() {
        return super.toString() +
               "Class: Student\n" +
               "Status: " + status + "\n";
    }
}

// Employee class that is a subclass of Person
class Employee extends Person {
    private String office;
    private double salary;
    private MyDate dateHired;

    // Constructor for Employee
    public Employee(String name, String address, String phoneNumber, String emailAddress, String office, double salary, MyDate dateHired) {
        super(name, address, phoneNumber, emailAddress);
        this.office = office;
        this.salary = salary;
        this.dateHired = dateHired;
    }

    // toString method to display full details
    public String toString() {
        return super.toString() +
               "Class: Employee\n" +
               "Office: " + office + "\n" +
               "Salary: $" + salary + "\n" +
               "Date Hired: " + dateHired + "\n";
    }
}

// Faculty class that is a subclass of Employee
class Faculty extends Employee {
    private int officeHours;
    private String rank;

    // Constructor for Faculty
    public Faculty(String name, String address, String phoneNumber, String emailAddress, String office, double salary, MyDate dateHired, int officeHours, String rank) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.officeHours = officeHours;
        this.rank = rank;
    }

    // toString method to display full details
    public String toString() {
        return super.toString() +
               "Class: Faculty\n" +
               "Office Hours: " + officeHours + " hours/week\n" +
               "Rank: " + rank + "\n";
    }
}

// Staff class that is a subclass of Employee
class Staff extends Employee {
    private String title;

    // Constructor for Staff
    public Staff(String name, String address, String phoneNumber, String emailAddress, String office, double salary, MyDate dateHired, String title) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.title = title;
    }

    // toString method to display full details
    public String toString() {
        return super.toString() +
               "Class: Staff\n" +
               "Title: " + title + "\n";
    }
}

// Main class to test the objects and print details
public class fullDate {
    public static void main(String[] args) {

        // Create objects
        Person person = new Person(
                "PRINCE",
                "Sordarpara, Rangpur",
                "01601942144",
                "cse12105007brur@gmail.com");

        Student student = new Student(
                "NOOR",
                "KHAMARMORE, Rangpur",
                "0171222222",
                "cse12105034brur@gmail.com",
                Student.SOPHOMORE);

        Employee employee = new Employee(
                "Mr. X",
                "BRUR, Rangpur",
                "0173322222",
                "mrx@gmail.com",
                "Office 101",
                40000,
                new MyDate(2022, 5, 15));

        Faculty faculty = new Faculty(
                "Dr. Alice",
                "321 Campus Dr",
                "555-2345",
                "alice@example.edu",
                "Office 102",
                75000,
                new MyDate(2021, 8, 25), 10,
                "Professor");

        Staff staff = new Staff(
                "Mr. Bob",
                "654 Admin St",
                "555-3456",
                "bob@example.com",
                "Admin Office",
                40000,
                new MyDate(2020, 3, 10),
                "Administrator");

        // Display full details of each object
        System.out.println(person.toString());
        System.out.println(student.toString());
        System.out.println(employee.toString());
        System.out.println(faculty.toString());
        System.out.println(staff.toString());
    }
}
