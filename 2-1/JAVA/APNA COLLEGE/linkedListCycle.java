
/*
 * L-29: Linked List Cycle
 * link: https://leetcode.com/problems/linked-list-cycle/description/
 */
import java.util.HashSet;

public class linkedListCycle {

    Node head;

    // Definition for singly-linked list.
    class Node {
        int data;
        Node next;

        // Constructor to initialize the node
        Node(int x) {
            data = x;
            next = null;
        }
    }

    public class Solution {
        // Function to detect if the linked list has a cycle
        public boolean hasCycle(Node head) {
            // Base case: If the list is empty or has only one node, no cycle
            if (head == null) {
                return false;
            }

            // Initialize hare and turtle pointers
            Node hare = head;
            Node turtle = head;

            // Traverse the list
            while (hare != null && hare.next != null) {
                hare = hare.next.next; // Hare moves two steps
                turtle = turtle.next; // Turtle moves one step

                // If hare and turtle meet, there is a cycle
                if (hare == turtle) {
                    return true;
                }
            }

            // If no cycle is detected, return false
            return false;
        }
    }

    // Add a new node to the end of the list
    public void addLast(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node currNode = head;
        while (currNode.next != null) {
            currNode = currNode.next;
        }

        currNode.next = newNode;
    }

    // Print the linked list while detecting a cycle to avoid infinite loops
    public void printList() {
        if (head == null) {
            System.out.println("The list is empty!");
            return;
        }

        // use hashSet to avoid infinite loop
        HashSet<Node> visitedNodes = new HashSet<>();

        Node currNode = head;
        while (currNode != null) {

            // if visited the same node again then it's true
            if (visitedNodes.contains(currNode)) {
                System.out.print("Cycle detected at node with value " + currNode.data + " -> ...");
                break;
            }

            System.out.print(currNode.data + " -> ");

            // after visited any node add this to hashSet
            visitedNodes.add(currNode);
            currNode = currNode.next;
        }
        System.out.println("NULL");
    }

    /// MAIN FUNCTION
    public static void main(String[] args) {

        // Create an instance of the outer class list
        linkedListCycle list = new linkedListCycle();

        // Create an instance of the Solution class
        Solution solution = list.new Solution();

        // Add nodes to the list
        list.addLast(3);
        list.addLast(6);
        list.addLast(0);
        list.addLast(5);

        // Manually create a cycle by connecting the last node to the second node
        list.head.next.next.next.next = list.head.next; // Creates a cycle

        // Print the list (will stop if a cycle is detected)
        System.out.println("List before checking for cycle (printing stops at the cycle):");
        list.printList();

        // Check if the linked list has a cycle
        boolean hasCycle = solution.hasCycle(list.head);

        // Output result
        System.out.println("Has cycle: " + hasCycle);
    }
}
