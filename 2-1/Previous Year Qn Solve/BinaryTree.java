class Node {
    int data;
    Node left, right;

    // Constructor
    public Node(int item) {
        data = item;
        left = right = null;
    }
}

public class BinaryTree {
    Node root;

    // Constructor
    BinaryTree() {
        root = null;
    }

    // Function for preorder traversal
    void preorder(Node node) {
        if (node != null) {
            System.out.print(node.data + " ");
            preorder(node.left);
            preorder(node.right);
        }
    }

    // Function for postorder traversal
    void postorder(Node node) {
        if (node != null) {
            postorder(node.left);
            postorder(node.right);
            System.out.print(node.data + " ");
        }
    }

    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree();
        tree.root = new Node(4);
        tree.root.left = new Node(2);
        tree.root.right = new Node(5);
        tree.root.left.left = new Node(1);
        tree.root.left.right = new Node(3);

        System.out.print("Preorder traversal of the BST: ");
        tree.preorder(tree.root);
        System.out.println();

        System.out.print("Postorder traversal of the BST: ");
        tree.postorder(tree.root);
        System.out.println();
    }
}
