
public class countNodes {

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

        // Function to count the number of nodes in a binary tree
        public static int countOfNodes(Node root) {

            // Base case
            if (root == null) {
                return 0;
            }

            int leftNode = countOfNodes(root.left);
            int rightNode = countOfNodes(root.right);

            // Return the total count (left subtree + right subtree + current node)
            return leftNode + rightNode + 1;
        }
    }

    public static void main(String[] args) {
        // Array representation of the tree
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Build the binary tree from the array and get the root node
        Node root = BinaryTree.buildTree(nodes);

        // Call the countOfNodes method using the BinaryTree class
        System.out.println("Count of Nodes: " + BinaryTree.countOfNodes(root));
    }
}
