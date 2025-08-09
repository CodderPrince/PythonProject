public class TwentyNine {

    // create head
    ListNode head;

    // ListNode class definition
    class ListNode {
        int data;
        ListNode next;

        ListNode(int x) {
            data = x;
            next = null;
        }
    }

    public static ListNode removeNthFromEnd(ListNode head, int n) {
        // Base case: if there's only one node
        if (head.next == null) {
            System.out.println("Single node list. Returning null.");
            return null;
        }

        // Calculate the size of the linked list
        int size = 0;
        ListNode curr = head;
        while (curr != null) {
            size++;
            curr = curr.next;
        }
        System.out.println("Size of list: " + size);

        // Another base case: if n equals the size of the list, remove the head node
        if (n == size) {
            System.out.println("Removing the head node.");
            return head.next;
        }

        // Find the node before the one to be removed
        int previousNodeIndex = size - n;
        System.out.println("Removing the node at position(index): " + previousNodeIndex);

        ListNode prev = head;
        int i = 1;
        while (i < previousNodeIndex) {
            System.out.println("Traversing to node(index): " + i);
            prev = prev.next;
            i++;
        }

        // Break the connection to remove the target node
        System.out.println("Node to be removed: " + prev.next.data);
        prev.next = prev.next.next;

        return head;
    }

    // create add last function
    public void addLast(int data) {
        ListNode newNode = new ListNode(data);
        // base case
        if (head == null) {
            head = newNode;
            return;
        }

        ListNode currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // when reach the last node
        currNode.next = newNode;
    }

    // print list
    public void printList() {

        if (head == null) {
            System.out.println("List is empty!");
        }

        ListNode currNode = head;
        while (currNode != null) {
            System.out.print(currNode.data + " -> ");
            currNode = currNode.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        // Test case setup
        TwentyNine list = new TwentyNine();
        list.addLast(10);
        list.addLast(11);
        list.addLast(12);
        list.addLast(13);
        list.addLast(14);
        int n = 2;

        System.out.print("Initial list: ");
        list.printList();
        System.out.println("Size of n: " + n);
        // Pass list.head instead of just head
        ListNode result = list.removeNthFromEnd(list.head, n); // Removing 2nd node from the end

        // Output the resulting list
        System.out.print("Updated list: ");
        list.printList();
    }
}
