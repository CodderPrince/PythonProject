public class Barn {
    public static void main(String[] args) {
        new Barn().go(1, "hi");
        new Barn().go(2, "hi", "world");
    }

    public void go(int x, String... y) {
        System.out.print(y[y.length - 1] + " ");
    }
}
