public class Car {
    // Instance variables
    String model;
    int year;

    // Constructor
    public Car(String model, int year) {
        this.model = model;
        this.year = year;
        System.out.println("New Car object created!");
    }

    public static void main(String[] args) {
        // Creating a Car object
        Car myCar = new Car("Toyota Camry", 2023); 
    }
}