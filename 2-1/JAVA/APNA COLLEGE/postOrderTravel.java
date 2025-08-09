
public class postOrderTravel {
    // Node class to represent a tree node

    static class Node {

        int data;
        Node left;
        Node right;

        // Constructor to create a new node
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

        // Post Order traversal method
        public static void postOrder(Node root) {
            // Base case: if the current node is null, return
            if (root == null) {
                return;
            }

            // Recursively traverse the left subtree
            postOrder(root.left);
            // Recursively traverse the right subtree
            postOrder(root.right);
            // Print the current node data
            System.out.print(root.data + " ");

        }
    }

    public static void main(String[] args) {
        // Array representation of the tree
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Create an instance of BinaryTree
        BinaryTree tree = new BinaryTree();

        // Build the binary tree from the array and get the root node
        Node root = tree.buildTree(nodes);

        // Call the postOrder method using the BinaryTree class
        System.out.print("Post Order(left, right, root): ");
        BinaryTree.postOrder(root);
        // Corrected call to postOrder
    }

}
