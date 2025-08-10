class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def extend_binary_tree(root):
    if root is None:
        return Node('X')  # Add a dummy node
    
    if root.left is None and root.right is None:
        # Leaf node, no need to add dummy nodes
        return root
    
    if root.left is None:
        # Add a dummy node to the left if missing
        root.left = Node('X')
    
    if root.right is None:
        # Add a dummy node to the right if missing
        root.right = Node('X')
    
    # Recursively extend the left and right subtrees
    root.left = extend_binary_tree(root.left)
    root.right = extend_binary_tree(root.right)
    
    return root

def print_tree(root, indent=0):
    if root is None:
        return
    print(' ' * indent + str(root.data))
    print_tree(root.left, indent + 4)
    print_tree(root.right, indent + 4)

# Example usage
if __name__ == "__main__":
    # Create a binary tree
    root = Node('A')
    root.left = Node('B')
    root.right = Node('C')
    root.left.left = Node('D')

    print("Original Binary Tree:")
    print_tree(root)

    # Convert to extended binary tree
    extended_root = extend_binary_tree(root)

    print("\nExtended Binary Tree:")
    print_tree(extended_root)
