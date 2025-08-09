
public class optDiameter {

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

        // Create a class for calculating height and diameter
        static class TreeInfo {

            int height;
            int diam;

            TreeInfo(int height, int diam) {
                this.height = height;
                this.diam = diam;
            }
        }

        // Create a diameter function
        public static TreeInfo diameter(Node root) {
            // Base case
            if (root == null) {
                return new TreeInfo(0, 0);
            }

            TreeInfo left = diameter(root.left);
            TreeInfo right = diameter(root.right);

            // Calculate height
            int myHeight = Math.max(left.height, right.height) + 1;

            // Calculate diameter from the subtrees
            int diam1 = left.diam;
            int diam2 = right.diam;
            int diam3 = left.height + right.height + 1;

            // Determine the maximum diameter
            int myDiam = Math.max(diam3, Math.max(diam1, diam2));

            // Create and return a TreeInfo object
            return new TreeInfo(myHeight, myDiam);
        }
    }

    public static void main(String[] args) {
        // Array representation of the tree
        int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};

        // Build the binary tree from the array and get the root node
        Node root = BinaryTree.buildTree(nodes);

        // Call the diameter method using the BinaryTree class and print the diameter
        BinaryTree.TreeInfo treeInfo = BinaryTree.diameter(root);
        System.out.println("Diameter of the Tree: " + treeInfo.diam);
    }
}
