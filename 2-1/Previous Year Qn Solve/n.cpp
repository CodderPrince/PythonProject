#include <iostream>
using namespace std;

// Structure for a node of BST
struct Node
{
    int data;
    Node *left;
    Node *right;
};

// Function to create a new BST node
Node *newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->left = temp->right = nullptr;
    return temp;
}

// Function for preorder traversal
void preorder(Node *root)
{
    if (root != nullptr)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Function for postorder traversal
void postorder(Node *root)
{
    if (root != nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    Node *root = newNode(4);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(1);
    root->left->right = newNode(3);

    cout << "Preorder traversal of the BST: ";
    preorder(root);
    cout << "\n";

    cout << "Postorder traversal of the BST: ";
    postorder(root);
    cout << "\n";

    return 0;
}
