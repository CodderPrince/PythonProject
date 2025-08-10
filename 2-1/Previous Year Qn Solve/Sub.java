public class Sub {
    private int a;

    public Sub(int a) {
        this.a = a;
    }

    public static void main(String[] args) {
        // Create an instance of Sub
        Sub sub = new Sub(10);

        // Print the value of 'a'
        System.out.println("Value of 'a': " + sub.a);
    }
}
