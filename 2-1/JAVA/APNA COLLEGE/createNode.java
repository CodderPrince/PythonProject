
public class createNode {

    // create head
    Node head;

    // create node
    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
        }

    }

    // create addFirst fucnation
    public void addFirst(String data) {
        // create new node
        Node newNode = new Node(data);

        // base case
        if (head == null) {
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }

    // create element in last function
    public void addLast(String data) {
        // create new node
        Node newNode = new Node(data);

        // base case
        if (head == null) {
            head = newNode;
            return;
        }

        // if already head here
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // when reach th last node
        currNode.next = newNode;
    }

    // create print list function\
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

        // lastly print null
        System.out.println("NULL");
    }

    public static void main(String[] args) {

        // create list object
        createNode list = new createNode();

        // simple linked list
        list.addFirst("prince");
        list.printList();

        // add element in first
        list.addFirst("Md. An Nahian ");
        list.printList();

        // add element in last
        list.addLast("CSE-14");
        list.printList();

    }
}
