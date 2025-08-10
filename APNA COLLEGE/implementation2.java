
public class implementation2 {

    static int arr[];
    static int size;
    static int rear = -1;
    static int front = -1;

    // Constructor to initialize queue
    implementation2(int n) {  // Changed constructor name to match class name
        arr = new int[n];
        this.size = n;
    }

    public static boolean isEmpty() {
        return rear == -1 && front == -1;
        // queue is empty
    }

    // when full
    public static boolean isFull() {
        return (rear + 1) % size == front;  // Fixed method name from isFUll() to isFull()
    }

    // enqueue or add
    public static void add(int data) {
        // base case
        if (isFull()) {
            System.out.println("Full Queue!");
            return;
        }

        // 1st element add
        if (front == -1) {
            front = 0;
        }

        rear = (rear + 1) % size;
        arr[rear] = data;
    }

    // remove or delete or dequeue O(1)
    public static int remove() {
        if (isEmpty()) {
            System.out.println("Empty Queue");
            return -1;
        }

        int result = arr[front];

        // remove single element
        if (rear == front) {
            rear = front = -1;
        } else {
            front = (front + 1) % size;  // when our front is in the last index
        }

        return result;  // Added the missing return statement
    }

    // peek
    public static int peek() {
        if (isEmpty()) {
            System.out.println("Empty Queue");
            return -1;
        }

        return arr[front];
    }

    public static void main(String[] args) {

        // create object
        implementation2 q = new implementation2(5);  // Used the class name correctly

        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);

        //remove front = 1
        System.out.println("Remove front: " + q.remove());

        q.add(6);

        //remove now front = 2
        System.out.println("Remove front: " + q.remove());

        q.add(7);

         // 1 2 3
        while (!q.isEmpty()) {
            System.out.println(q.peek());
            q.remove();
        }
    }

}
