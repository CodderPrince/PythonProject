# Define a class for the tree node
class TreeNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

# Define the function to count the leaves
def count_leaves(node):
    # Base case: If the node is None, return 0
    if node is None:
        return 0

    # If the node is a leaf (no left or right child), return 1
    if node.left is None and node.right is None:
        return 1

    # Recursively count the leaves in the left and right subtrees
    left_leaves = count_leaves(node.left)
    right_leaves = count_leaves(node.right)

    # Sum the leaf counts from the left and right subtrees
    return left_leaves + right_leaves

# Example usage
# Construct a binary tree
root = TreeNode(1)
root.left = TreeNode(2)
root.right = TreeNode(3)
root.left.left = TreeNode(4)
root.left.right = TreeNode(5)
root.right.right = TreeNode(6)

# Count the leaves
number_of_leaves = count_leaves(root)
print("Number of leaves:", number_of_leaves)
