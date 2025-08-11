//L-28: How to reverse a linked list
public class TwentyEight {
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

    public void addLast(String data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        // if head not null
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // when reach the last node
        currNode.next = newNode;

    }

    // reverse function
    public void reverseIterate() {

        // when head is null
        if (head == null) {
            return;
        }

        // if list has one element
        if (head.next == null) {
            return;
        }
        Node prevNode = head;
        System.out.println("Previous Node: " + prevNode.data);
        Node currNode = head.next;
        System.out.println("Current Node: " + currNode.data);

        while (currNode != null) {
            Node nextNode = currNode.next;
            // System.out.println("Next Node: " + nextNode.data);
            // reverse the link
            /*
             * p = 1 ; c = 2 ; n = 3 : 1 -> 2
             * currNode.next = prevNode : 2 -> 1
             * currNode.next = prevNode : 3 -> 2
             * currNode.next = prevNode : 4 -> 3
             * currNode.next = prevNode : null -> 4
             * Now list is: null -> 4 -> 3 -> 2 -> 1
             * 
             * That point mainly reversed the list
             */
            currNode.next = prevNode;
            System.out.println("currNode.next Node: " + currNode.next.data);

            // update
            prevNode = currNode;
            System.out.println("Previous Node(While): " + prevNode.data);
            currNode = nextNode;
            System.out.println("Current Node(While): " + prevNode.data);
        }

        // at the last point head.next is null only
        head.next = null;
        // now, new head is prevNode = 4
        head = prevNode;
    }

    // create print function
    public void printList() {
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

    public static void main(String[] args) {
        // create object for list
        TwentyEight list = new TwentyEight();

        list.addLast("1");
        list.addLast("2");
        list.addLast("3");
        list.addLast("4");

        list.printList();

        list.reverseIterate();
        list.printList();

    }

}
