#include <iostream>
using namespace std;

// Definition of a node in the Binary Search Tree
struct TreeNode
{
    int key;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : key(value), left(nullptr), right(nullptr) {}
};

// Class for Binary Search Tree operations
class BinarySearchTree
{
private:
    TreeNode *root;

    // Helper function to insert a key into the tree
    TreeNode *insert(TreeNode *node, int key)
    {
        if (node == nullptr)
            return new TreeNode(key);

        if (key < node->key)
            node->left = insert(node->left, key);
        else if (key > node->key)
            node->right = insert(node->right, key);

        return node;
    }

    // Helper function to search for a key in the tree
    bool search(TreeNode *node, int key)
    {
        if (node == nullptr)
            return false;

        if (key == node->key)
            return true;
        else if (key < node->key)
            return search(node->left, key);
        else
            return search(node->right, key);
    }

public:
    BinarySearchTree() : root(nullptr) {}

    // Function to insert a key into the tree
    void insert(int key)
    {
        root = insert(root, key);
    }

    // Function to search for a key in the tree
    bool search(int key)
    {
        return search(root, key);
    }
};

int main()
{
    BinarySearchTree bst;

    // Insert keys into the BST
    bst.insert(10);
    bst.insert(5);
    bst.insert(15);
    bst.insert(3);
    bst.insert(7);

    // Search for keys in the BST
    cout << "Search 5: " << (bst.search(5) ? "Found" : "Not found") << endl;
    cout << "Search 12: " << (bst.search(12) ? "Found" : "Not found") << endl;

    return 0;
}
