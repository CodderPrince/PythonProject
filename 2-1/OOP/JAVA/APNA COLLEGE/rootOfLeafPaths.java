
import java.util.*;

public class rootOfLeafPaths {

    static class Node {

        int data;     // Value stored in the node
        Node left;    // Pointer to the left child
        Node right;   // Pointer to the right child

        // Constructor to initialize a node with a value
        Node(int data) {
            this.data = data;
        }
    }

    // Delete a node from the BST
    public static Node delete(Node root, int val) {
        if (root == null) {
            return null; // If the root is null, there's nothing to delete
        }

        // Navigate left if value is less than current node's data
        if (val < root.data) {
            root.left = delete(root.left, val);
        } // Navigate right if value is greater than current node's data
        else if (val > root.data) {
            root.right = delete(root.right, val);
        } // Node to be deleted found
        else {
            // Case 1: Node has no children (leaf node)
            if (root.left == null && root.right == null) {
                return null;
            }

            // Case 2: Node has one child
            if (root.left == null) {
                return root.right;
            } else if (root.right == null) {
                return root.left;
            }

            // Case 3: Node has two children
            // Find the in-order successor (smallest node in the right subtree)
            Node IS = inorderSuccessor(root.right);
            // Replace the current node's data with the in-order successor's data
            root.data = IS.data;
            // Delete the in-order successor from the right subtree
            root.right = delete(root.right, IS.data);
        }

        // Return the (possibly updated) root node
        return root;
    }

    // Helper function to find the in-order successor (smallest node in the right subtree)
    public static Node inorderSuccessor(Node root) {
        while (root.left != null) {
            root = root.left;
        }
        return root;
    }

    // In-order traversal of the BST (Left, Root, Right)
    public static void inorder(Node root) {
        if (root == null) {
            return;
        }

        // Traverse the left subtree
        inorder(root.left);
        // Print the root's data
        System.out.print(root.data + " ");
        // Traverse the right subtree
        inorder(root.right);
    }

    // Insert a value into the BST
    public static Node insert(Node root, int val) {
        if (root == null) {
            root = new Node(val);
            return root;
        }

        if (val < root.data) {
            root.left = insert(root.left, val);
        } else {
            root.right = insert(root.right, val);
        }

        return root;
    }

    //create Print Range Function
    public static void printInRange(Node root, int X, int Y) {
        //base case
        if (root == null) {
            return;
        }

        //case 1
        if (X <= root.data && root.data <= Y) {
            //print left subtree
            printInRange(root.left, X, Y);
            //print root
            System.out.print(root.data + " ");
            //print right subtree
            printInRange(root.right, X, Y);
        } //case 2
        else if (X > root.data) {
            //print right subtree
            printInRange(root.right, X, Y);
        } //case 3
        //if(Y < root.data)
        else {
            printInRange(root.left, X, Y);
        }
    }

    //create print to leaf function
    public static void printRoot2Leaf(Node root, ArrayList<Integer> path) {
        //base case
        if (root == null) {
            return;
        }

        //add root in path
        path.add(root.data);

        //leaf node
        if (root.left == null && root.right == null) {
            printPath(path);
        } //non leaf node
        else {
            printRoot2Leaf(root.left, path);
            printRoot2Leaf(root.right, path);
        }

        //backtracking remove the last node from path
        path.remove(path.size() - 1);
    }

    //create print path function for print
    public static void printPath(ArrayList<Integer> path) {
        for (int i = 0; i < path.size(); i++) {
            System.out.print(path.get(i) + " -> ");
        }
        System.out.println("NULL");
    }

    // Main method to run the BST deletion example
    public static void main(String[] args) {
        // Array of values to be inserted into the BST
        int values[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
        Node root = null;

        // Insert each value from the array into the BST
        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }

        // Perform in-order traversal to print the values in sorted order
        System.out.print("BST full: ");
        inorder(root);
        System.out.println();  // Print a new line after traversal

        // Delete the node with value 4
        root = delete(root, 4);

        System.out.println("BST All Path: ");
        printRoot2Leaf(root, new ArrayList<>());

    }

}
