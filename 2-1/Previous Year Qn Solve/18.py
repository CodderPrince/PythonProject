class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def copyLinkedList(NAME1_head):
    # Initialize an empty linked list NAME2
    NAME2_head = None
    NAME2_tail = None

    # Traverse the linked list NAME1
    current = NAME1_head
    while current is not None:
        # Create a new node with the same data value
        new_node = Node(current.data)

        # Append the new node to NAME2
        if NAME2_head is None:
            NAME2_head = new_node
            NAME2_tail = new_node
        else:
            NAME2_tail.next = new_node
            NAME2_tail = new_node

        # Move to the next node in NAME1
        current = current.next

    return NAME2_head

# Utility function to print linked list
def printLinkedList(head):
    current = head
    while current is not None:
        print(current.data, end=" -> ")
        current = current.next
    print("None")

# Example usage:
if __name__ == "__main__":
    # Create linked list NAME1
    NAME1_head = Node('A')
    NAME1_head.next = Node('B')
    NAME1_head.next.next = Node('C')

    # Copy linked list NAME1 into NAME2
    NAME2_head = copyLinkedList(NAME1_head)

    # Print original and copied linked lists
    print("Original linked list NAME1:")
    printLinkedList(NAME1_head)
    print("Copied linked list NAME2:")
    printLinkedList(NAME2_head)
