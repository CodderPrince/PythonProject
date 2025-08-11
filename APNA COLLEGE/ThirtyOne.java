/*
 * L-31: Queue full in one shot
 */

public class ThirtyOne {

    static class Queue {

        static int arr[];
        static int size;
        static int rear = -1;

        Queue(int n) {
            //array size
            arr = new int[n];
            this.size = n;
        }

        public static boolean isEmpty() {
            /*
         * when our queue is full empty then return -1
             */
            return rear == -1;
        }

        // add function
        public static void add(int data) {
            //base case if reach last index
            if (rear == size - 1) {
                System.out.println("Full Queue!");
                return;
            }

            //increase rear value rear ++
            /*
             * rear = -1
             * rear++
             * rear = 0
             * arr[0]= data 
             * arr[rear] = data
             */
            rear++;
            arr[rear] = data;
        }

        //dequeue or remove
        public static int remove() {
            if (isEmpty()) {
                System.out.println("empty queue");
                return -1;
            }

            //front alltime arr[0]
            int front = arr[0];

            for (int i = 0; i < rear; i++) {
                arr[i] = arr[i + 1];
            }

            rear--;
            return front;
        }

        //peek function
        public static int peek() {
            if (isEmpty()) {
                System.out.println("empty queue");
                return -1;
            }

            return arr[0];
        }

    }

    public static void main(String[] args) {
        Queue q = new Queue(5);

        q.add(1);
        q.add(2);
        q.add(3);

        while (!q.isEmpty()) {
            System.out.println(q.peek());
            q.remove();
        }
    }

}
