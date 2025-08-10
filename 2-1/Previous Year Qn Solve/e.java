// Interface named Customer
interface Customer {
    void information();
    void show();
    double calculateTax(double income, double taxRate);
}

// Employee class implementing Customer interface
class Employee implements Customer {
    private String name;
    private double income;
    private double taxRate;

    public Employee(String name, double income, double taxRate) {
        this.name = name;
        this.income = income;
        this.taxRate = taxRate;
    }

    @Override
    public void information() {
        System.out.println("Name: " + name);
        System.out.println("Income: " + income);
        System.out.println("Tax Rate: " + taxRate);
    }

    @Override
    public void show() {
        System.out.println("Employee Information:");
        information();
        System.out.println("Tax: " + calculateTax(income, taxRate));
    }

    @Override
    public double calculateTax(double income, double taxRate) {
        return income * taxRate;
    }
}

// Main class
public class e {
    public static void main(String[] args) {
        Employee employee = new Employee("John Doe", 50000, 0.2);
        employee.show();
    }
}