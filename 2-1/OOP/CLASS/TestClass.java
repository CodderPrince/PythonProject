/*
 * 11.2
 * Output the Class Name and Person name
 * 
 */

//class to represent hiring date
class MyDate {
    private int year;
    private int month;
    private int day;

    // create constructor for date
    public MyDate(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    // use toString format
    public String toString() {
        return year + "/" + month + "/" + day;
    }
}

// create class person
class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String emailAddress;

    // Create person Constructor
    public Person(String name, String address, String phoneNumber, String emailAddress) {

        // use this keyword for push every value
        this.name = name;
        this.address = address;
        this.phoneNumber = phoneNumber;
        this.emailAddress = emailAddress;
    }

    // Getter for name
    public String getName() {
        return name;
    }

    // Use toString to display the output
    public String toString() {
        return "Class: Person, Name: " + name;
        // this is the output format
    }
}

// Student class that is a subclass of Person
class Student extends Person {
    public static final String FRESHMAN = "Freshman";
    public static final String SOPHOMORE = "Sophomore";
    public static final String JUNIOR = "Junior";
    public static final String SENIOR = "Senior";

    // define status as a constant
    private String status;

    // constructor of Student
    public Student(String name, String address, String phoneNumber, String emailAddress, String status) {
        super(name, address, phoneNumber, emailAddress);
        this.status = status;
    }

    // use toString
    public String toString() {
        return "Class: Student, Name: " + getName();
    }
}

// Employee class that is a subclass of Person
class Employee extends Person {
    private String office;
    private double salary; // mentioned as hired
    private MyDate dateHired;

    // constructor of Employee
    public Employee(String name, String address,
            String phoneNumber, String emailAddress,
            String office, double salary, MyDate dateHired) {
        super(name, address, phoneNumber, emailAddress);
        this.office = office;
        this.salary = salary;
        this.dateHired = dateHired;
    }

    // use toString
    public String toString() {
        return "Class: Employee, Name: " + getName();
    }
}

// Faculty is a class, that is subclass of Employee
class Faculty extends Employee {
    private int officeHours;
    private String rank;

    // constructor of Faculty
    public Faculty(String name, String address,
            String phoneNumber, String emailAddress,
            String office, double salary,
            MyDate dateHired, int officeHours, String rank) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.officeHours = officeHours;
        this.rank = rank;

    }

    // use toString
    public String toString() {
        return "Class: Faculty, Name: " + getName();
    }
}

// Staff is a class, that is subclass of Employee
class Staff extends Employee {

    private String title; // Stores job title

    // constructor of Staff
    public Staff(String name, String address,
            String phoneNumber, String emailAddress,
            String office, double salary,
            MyDate dateHired, String title) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.title = title;

    }

    // use toString
    public String toString() {
        return "Class: Staff, Name: " + getName();
    }
}

public class TestClass {
    public static void main(String[] args) {

        // create objects
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

        // Display the toString output of each object
        System.out.println(person.toString());
        System.out.println(student.toString());
        System.out.println(employee.toString());
        System.out.println(faculty.toString());
        System.out.println(staff.toString());
    }
}
