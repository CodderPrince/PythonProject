/*
 * L-29: Palindromic Linked List
 * Link: https://leetcode.com/problems/palindrome-linked-list/
 */

public class PalindromicList {
    // Create head
    Node head;

    // Create Node class
    class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // Add element at the end of the linked list
    public void addLast(int data) {
        // Create new node
        Node newNode = new Node(data);

        // Base case: if the list is empty
        if (head == null) {
            head = newNode;
            return;
        }

        // Traverse to the last node
        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        // Add new node at the end
        currNode.next = newNode;
    }

    // Find the middle of the linked list using the hare and turtle method
    public Node findMiddle(Node head) {
        Node hare = head;
        Node turtle = head;

        /*
         * hare has two option
         * if hare.next == null that's means hare at the last position
         * if hare.next.next == null that's also not possible to jump
         */
        while (hare.next != null && hare.next.next != null) {
            hare = hare.next.next;// two step
            turtle = turtle.next;// single step
        }

        return turtle;// first half last index
    }

    /// Print the first half of the linked list (from head to middle)
    public void printFirstHalf(Node head, Node middle) {
        Node curr = head;
        while (curr != middle.next) { // Stop before the middle node
            System.out.print(curr.data + " -> ");
            curr = curr.next;
        }
        System.out.println("NULL");
    }

    // Reverse the linked list
    public Node reverse(Node head) {
        Node prev = null;
        Node curr = head;

        while (curr != null) {
            Node next = curr.next; // Save the next node
            curr.next = prev; // Reverse the link
            prev = curr; // Move prev forward
            curr = next; // Move curr forward
        }

        // Return the new head of the reversed list
        return prev;
    }

    // Print the linked list starting from a given node
    public void printList(Node node) {
        // base case
        if (node == null) {
            System.out.println("The list is empty!");
            return;
        }

        Node curr = node;
        while (curr != null) {
            System.out.print(curr.data + " -> ");
            curr = curr.next;
        }
        System.out.println("NULL");
    }

    // Check if the linked list is a palindrome
    public boolean isPalindrome(Node head) {
        // Base case: if no element or one element, it's a palindrome
        if (head == null || head.next == null) {
            return true;
        }

        // Find the middle of the linked list
        Node middle = findMiddle(head);

        // Print the first half of the list (from head to middle)
        System.out.print("First half: ");
        printFirstHalf(head, middle);

        // Reverse the second half of the list
        Node secondHalfStart = reverse(middle.next);

        // Print the second half after reversing
        System.out.print("Second half after reverse: ");
        printList(secondHalfStart);

        // Compare the first half and the reversed second half
        Node firstHalfStart = head;

        while (secondHalfStart != null) {
            // If element do not match, it's not a palindrome
            if (firstHalfStart.data != secondHalfStart.data) {
                return false;
            }
            firstHalfStart = firstHalfStart.next;
            secondHalfStart = secondHalfStart.next;
        }

        // If all elements match, it's a palindrome
        return true;
    }

    /// MAIN FUNCTION
    public static void main(String[] args) {
        // Create object
        PalindromicList list = new PalindromicList();

        // Add dataues to the list
        list.addLast(1);
        list.addLast(2);
        list.addLast(3);
        list.addLast(2);
        list.addLast(1);

        // Print initial list
        System.out.print("Initial List: ");
        list.printList(list.head);

        // Check if the list is a palindrome
        boolean result = list.isPalindrome(list.head);
        System.out.println("Is the list palindrome?");
        System.out.println("Answer: " + result);
    }
}
