//L-27: Introduction to linked list
public class TwentySeventh {

    // create head
    Node head;

    // create size variable
    private int size;

    // create constructor size = 0
    TwentySeventh() {
        this.size = 0;
    }

    // create node
    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;

            // when create new node increment size
            size++;
        }
    }

    // add element in first
    public void addFirst(String data) {
        // createa new node
        Node newNode = new Node(data);

        // check head null or not
        if (head == null) {
            head = newNode;
            return;
        }

        // if head not null
        newNode.next = head;
        head = newNode;
    }

    // add element in last
    public void addLast(String data) {
        // create new node
        Node newNode = new Node(data);

        // base case
        if (head == null) {
            head = newNode;
            return;
        }

        // if head not null
        Node currNode = head;

        // crate while loop untill found null
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // when reach the last node
        currNode.next = newNode;
    }

    // delete first
    public void deleteFirst() {
        // base case
        if (head == null) {
            System.out.println("The list is empty!");
            return;
        }

        // decrement size for track
        size--;

        // if head not null then indicate head.next = head
        head = head.next;
    }

    // delete last
    public void deleteLast() {
        // base case 1
        if (head == null) {
            System.out.println("The list is empty!");
            return;
        }

        // decrement size for track
        size--;

        // base case 2
        if (head.next == null) {
            head = null;
            return;
        }

        Node secondLast = head;
        Node lastNode = head.next;

        while (lastNode.next != null) {
            secondLast = secondLast.next;
            lastNode = lastNode.next;
        }

        // upgrade last node to null
        secondLast.next = null;

    }

    // create size function
    public int getSize() {
        return size;
    }

    // create print function
    public void printList() {
        // base case if head is already null
        if (head == null) {
            System.out.println("List is empty!\n");
        }
        Node currNode = head;

        while (currNode != null) {
            System.out.print(currNode.data + " -> ");
            currNode = currNode.next;
        }

        // print null in last
        System.out.println("NULL");

    }

    public static void main(String[] args) {
        // create list object in main function
        TwentySeventh list = new TwentySeventh();

        // called add first function
        list.addFirst("a");
        list.printList();

        // add element in first
        list.addFirst("is");
        list.printList();

        // add element in last
        list.addLast("list");
        list.printList();

        // delete first
        list.deleteFirst();
        list.printList();

        // delete last
        list.deleteLast();
        list.printList();

        // called size function
        System.out.println("Now list size is: " + list.getSize());
    }

}

// //L-27: Introduction to linked list
// public class TwentySeventh {
// // create a head
// Node head;

// // create node
// class Node {
// String data;
// Node next;

// Node(String data) {
// this.data = data;// indicate this node to next
// this.next = null;// last node indicate null
// }
// }

// }

// //create add first function
// public void addFirst(){

// }

// public static void main(String[] args) {
// // create list object
// TwentySeventh list = new TwentySeventh();

// list.addFirst("prince");

// }
