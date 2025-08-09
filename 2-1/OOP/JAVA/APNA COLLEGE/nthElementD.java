//L-29: Delete nth element from last
/*
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/
 */

public class nthElementD {
    // create head
    Node head;

    // create node
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    /// create addLast element function
    public void addLast(int data) {
        // create new node
        Node newNode = new Node(data);

        // base case
        if (head == null) {
            head = newNode;
            return;
        }

        // if head is not null
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // when reach the last element
        currNode.next = newNode;
    }

    // create print function
    public void printList() {
        // base case
        if (head == null) {
            System.out.println("The list is empty!");
        }

        Node currNode = head;
        while (currNode != null) {
            System.out.print(currNode.data + " -> ");
            currNode = currNode.next;
        }
        System.out.println("NULL");
    }

    /// create remove nth element function
    public static Node removeNthFromEnd(Node head, int n) {
        // Base case: if there's only one node
        if (head.next == null) {
            return null;
        }

        // calculate size
        int size = 0;
        Node currNode = head;
        while (currNode != null) {
            size++;
            currNode = currNode.next;
        }

        // Another base case: if n equals the size
        if (n == size) {
            return head.next;// remove head
        }

        // find the previous node index
        int previousNodeIndex = size - n;
        Node previous = head;
        int i = 1;
        while (i < previousNodeIndex) {
            previous = previous.next;
            i++;
        }

        // break the connection
        previous.next = previous.next.next;
        // directly null connection

        return head;
    }

    public static void main(String[] args) {
        // create object
        nthElementD list = new nthElementD();

        list.addLast(10);
        list.addLast(11);
        list.addLast(12);
        list.addLast(13);
        list.addLast(14);
        list.addLast(15);

        // called print function
        System.out.print("Initial list: ");
        list.printList();

        int n = 2;

        // called remove function
        Node result = list.removeNthFromEnd(list.head, n);
        System.out.print("After remove: ");
        list.printList();
    }

}
