// MyDate class as defined in another exercise, assumed to be available

// Person.java
public class Person {
    private String name;
    private String address;
    private String phoneNumber;
    private String emailAddress;

    public Person(String name, String address, String phoneNumber, String emailAddress) {
        this.name = name;
        this.address = address;
        this.phoneNumber = phoneNumber;
        this.emailAddress = emailAddress;
    }

    @Override
    public String toString() {
        return "Class: Person, Name: " + name;
    }
}

// Student.java
public class Student extends Person {
    public static final String FRESHMAN = "Freshman";
    public static final String SOPHOMORE = "Sophomore";
    public static final String JUNIOR = "Junior";
    public static final String SENIOR = "Senior";
    
    private String status;

    public Student(String name, String address, String phoneNumber, String emailAddress, String status) {
        super(name, address, phoneNumber, emailAddress);
        this.status = status;
    }

    @Override
    public String toString() {
        return "Class: Student, Name: " + super.toString() + ", Status: " + status;
    }
}

// Employee.java
public class Employee extends Person {
    private String office;
    private double salary;
    private MyDate dateHired;

    public Employee(String name, String address, String phoneNumber, String emailAddress, 
                    String office, double salary, MyDate dateHired) {
        super(name, address, phoneNumber, emailAddress);
        this.office = office;
        this.salary = salary;
        this.dateHired = dateHired;
    }

    @Override
    public String toString() {
        return "Class: Employee, Name: " + super.toString() + ", Office: " + office;
    }
}

// Faculty.java
public class Faculty extends Employee {
    private int officeHours;
    private String rank;

    public Faculty(String name, String address, String phoneNumber, String emailAddress, 
                   String office, double salary, MyDate dateHired, int officeHours, String rank) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.officeHours = officeHours;
        this.rank = rank;
    }

    @Override
    public String toString() {
        return "Class: Faculty, Name: " + super.toString() + ", Rank: " + rank;
    }
}

// Staff.java
public class Staff extends Employee {
    private String title;

    public Staff(String name, String address, String phoneNumber, String emailAddress, 
                 String office, double salary, MyDate dateHired, String title) {
        super(name, address, phoneNumber, emailAddress, office, salary, dateHired);
        this.title = title;
    }

    @Override
    public String toString() {
        return "Class: Staff, Name: " + super.toString() + ", Title: " + title;
    }
}

// TestProgram.java
public class TestProgram {
    public static void main(String[] args) {
        Person person = new Person("John Doe", "123 Main St", "555-1234", "john@example.com");
        Student student = new Student("Jane Doe", "456 Maple St", "555-5678", "jane@example.com", Student.SENIOR);
        Employee employee = new Employee("Jim Beam", "789 Oak St", "555-8765", "jim@example.com", "Office 101", 60000, new MyDate());
        Faculty faculty = new Faculty("Dr. Smith", "321 Elm St", "555-4321", "smith@example.com", "Office 102", 75000, new MyDate(), 10, "Professor");
        Staff staff = new Staff("Mary Jones", "654 Pine St", "555-6789", "mary@example.com", "Office 103", 50000, new MyDate(), "Administrator");

        System.out.println(person.toString());
        System.out.println(student.toString());
        System.out.println(employee.toString());
        System.out.println(faculty.toString());
        System.out.println(staff.toString());
    }
}
