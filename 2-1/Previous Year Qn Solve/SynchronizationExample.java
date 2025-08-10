class Counter {
    private int count = 0;

    // Synchronized method to ensure thread-safe increment
    public synchronized void increment() {
        count++;
    }

    public int getCount() {
        return count;
    }
}

class CounterThread extends Thread {
    private Counter counter;

    public CounterThread(Counter counter) {
        this.counter = counter;
    }

    @Override
    public void run() {
        for (int i = 0; i < 1000; i++) {
            counter.increment();
        }
    }
}

public class SynchronizationExample {
    public static void main(String[] args) {
        Counter counter = new Counter();

        // Creating two threads that share the same Counter instance
        CounterThread thread1 = new CounterThread(counter);
        CounterThread thread2 = new CounterThread(counter);

        // Starting both threads
        thread1.start();
        thread2.start();

        // Waiting for both threads to finish
        try {
            thread1.join();
            thread2.join();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }

        // Displaying the final count value
        System.out.println("Final count: " + counter.getCount());
    }
}
