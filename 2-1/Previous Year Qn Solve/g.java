public class g {
    public static void parse(String str) {
        float f = 0; // Declare f outside the try block to make it accessible in the catch and finally blocks
        try {
            f = Float.parseFloat(str);
        } catch (NumberFormatException nfe) {
            f = 0; // Set f to 0 if a NumberFormatException occurs
        } finally {
            System.out.println(f); // f is accessible here
        }
    }

    public static void main(String[] args) {
        parse("invalid");
    }
}
