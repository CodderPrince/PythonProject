
public class implementation3 {

    static class Node {

        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    static class Queue {

        private Node head = null;
        private Node tail = null;

        public boolean isEmpty() {
            return head == null && tail == null;  // Fixed: Check head and tail
        }

        // enqueue or add
        public void add(int data) {
            Node newNode = new Node(data);

            if (tail == null) {
                tail = head = newNode;  // When queue is empty
                return;
            }
            tail.next = newNode;
            tail = newNode;
        }

        // dequeue or remove
        public int remove() {
            if (isEmpty()) {
                System.out.println("Empty Queue");
                return -1;
            }

            int front = head.data;

            // If the queue has only one element
            if (head == tail) {
                tail = null;
            }
            head = head.next;

            return front;
        }

        // peek
        public int peek() {
            if (isEmpty()) {
                System.out.println("Empty queue!");
                return -1;
            }

            return head.data;
        }
    }

    public static void main(String[] args) {
        Queue q = new Queue();  // Changed to use the correct class

        q.add(1);
        q.add(2);
        q.add(3);
        q.add(4);
        q.add(5);

        while (!q.isEmpty()) {
            System.out.println(q.peek());
            q.remove();
        }
        // q.close();
    }
    
}
