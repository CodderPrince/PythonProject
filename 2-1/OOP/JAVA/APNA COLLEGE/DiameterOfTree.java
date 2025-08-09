
public class DiameterOfTree {

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

        // Function to Height of a binary tree
        public static int height(Node root) {

            // Base case
            if (root == null) {
                return 0;
            }

            int leftNode = height(root.left);
            int rightNode = height(root.right);

            int MaxHeight = Math.max(leftNode, rightNode) + 1;

            return MaxHeight;
        }

        //Create Diameter Tree Function
        public static int diameter(Node root) {

            //base case
            if (root == null) {
                return 0;
            }

            int diam1 = diameter(root.left);
            int diam2 = diameter(root.right);
            int diam3 = height(root.left) + height(root.right) + 1;

            return Math.max(diam3, Math.max(diam1, diam2));
        }
    }

    public static void main(String[] args) {
        // Array representation of the tree
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Build the binary tree from the array and get the root node
        Node root = BinaryTree.buildTree(nodes);

        // Call the countOfNodes method using the BinaryTree class
        System.out.println("Diameter of a Tree: " + BinaryTree.diameter(root));
    }

}
