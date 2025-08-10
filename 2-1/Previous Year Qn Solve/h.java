public class Dog {
    // Static variable (shared counter)
    static int dogCount = 0;

    // Instance variables
    String name;
    String breed;

    // Constructor
    public Dog(String name, String breed) {
        this.name = name;
        this.breed = breed;
        dogCount++; // Increment static counter when a new Dog is created
    }

    // Instance method
    public void bark() {
        System.out.println(name + " says Woof!");
    }

    // Static method (utility function)
    public static int getDogCount() {
        return dogCount;
    }
}

public class h {
    public static void main(String[] args) {
        // Accessing static member directly (within the same class)
        System.out.println("Initial dog count: " + Dog.dogCount);

        // Creating Dog objects
        Dog dog1 = new Dog("Buddy", "Golden Retriever");
        Dog dog2 = new Dog("Lucy", "Labrador");

        // Accessing static member using the class name
        System.out.println("Total dogs: " + Dog.getDogCount());

        // Calling an instance method
        dog1.bark(); 
    }
}