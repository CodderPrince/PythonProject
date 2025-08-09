public class ThirtyCLass {

    // Head should be an instance variable, not static
    public Node head;

    // create node function
    static class Node {

        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // create is empty function
    public boolean isEmpty() {
        return head == null;
    }

    // create PUSH function
    public void push(int data) {
        Node newNode = new Node(data);

        if (isEmpty()) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    // create pop function
    public int pop() {
        if (isEmpty()) {
            throw new RuntimeException("Stack is empty, cannot pop.");
        }

        int top = head.data; // current head
        head = head.next; // delete current head and link 2nd node to head
        return top;
    }

    // create peek function
    public int peek() {
        if (isEmpty()) {
            throw new RuntimeException("Stack is empty, cannot peek.");
        }

        return head.data;
    }

    public static void main(String[] args) {
        ThirtyCLass stack = new ThirtyCLass();

        stack.push(1);
        stack.push(2);
        stack.push(3);
        stack.push(4);

        // print all element
        while (!stack.isEmpty()) {
            System.out.println(stack.peek());
            stack.pop();
        }
    }
}
