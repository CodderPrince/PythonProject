public class TestFive {
    private int x;

    public synchronized void foo() {
        int current = x;
        x = current + 1;
    }

    public void go() {
        for (int i = 0; i < 5; i++) {
            Thread t = new Thread(() -> {
                foo();
                System.out.print(x + ", ");
            });
            t.start();
            try {
                t.join(); 
            } catch (InterruptedException e) {
                System.err.println("Thread interrupted: " + e.getMessage());
            }
        }
    }

    public static void main(String[] args) {
        new TestFive().go();
    }
}