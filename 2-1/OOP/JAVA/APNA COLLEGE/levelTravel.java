
import java.util.LinkedList;
import java.util.Queue;

public class levelTravel {

    static class Node {

        int data;
        Node left;
        Node right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    // BinaryTree class
    static class BinaryTree {

        static int ind = -1;

        // Function to build the binary tree
        public static Node buildTree(int nodes[]) {

            ind++; // Move to the next index

            // Base case - if the node is -1, it means null
            if (nodes[ind] == -1) {
                return null;
            }

            // Create a new node with the current value from the array
            Node newNode = new Node(nodes[ind]);

            // Recursively build the left and right subtrees
            newNode.left = buildTree(nodes);
            newNode.right = buildTree(nodes);

            return newNode; // Return the constructed node
        }

        public static void levelOrder(Node root) {

            // Base case if given empty tree
            if (root == null) {
                return;
            }

            // Create a queue
            Queue<Node> q = new LinkedList<>();

            // Add root first
            q.add(root);
            q.add(null); // Marker for the next line

            while (!q.isEmpty()) {
                Node currNode = q.remove();

                // Check if the current node is null
                if (currNode == null) {
                    System.out.println(); // Print new line

                    // If the queue is empty, break out of the loop
                    if (q.isEmpty()) {
                        break;
                    } else {
                        q.add(null); // Add marker for the next level
                    }
                } else {
                    System.out.print(currNode.data + " "); // Print node data in the same line

                    // Add left child to the queue
                    if (currNode.left != null) {
                        q.add(currNode.left);
                    }

                    // Add right child to the queue
                    if (currNode.right != null) {
                        q.add(currNode.right);
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        // Array representation of the tree
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Build the binary tree from the array and get the root node
        Node root = BinaryTree.buildTree(nodes);

        // Call the level order method using the BinaryTree class
        System.out.println("Level Order (left to right):");
        BinaryTree.levelOrder(root);
    }
}
