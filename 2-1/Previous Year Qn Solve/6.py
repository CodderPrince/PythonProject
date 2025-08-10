# Define the Node class
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

# Define the SinglyLinkedList class
class SinglyLinkedList:
    def __init__(self):
        self.head = None

    # Method to append a node at the end of the list
    def append(self, data):
        new_node = Node(data)
        if not self.head:
            self.head = new_node
            return
        last_node = self.head
        while last_node.next:
            last_node = last_node.next
        last_node.next = new_node

    # Method to print the linked list
    def print_list(self):
        current_node = self.head
        while current_node:
            print(current_node.data, end=" -> ")
            current_node = current_node.next
        print("None")

    # Method to prepend a node at the beginning of the list
    def prepend(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    # Method to delete a node by value
    def delete_node(self, key):
        current_node = self.head

        # If the head node itself holds the key
        if current_node and current_node.data == key:
            self.head = current_node.next
            current_node = None
            return

        # Search for the key to be deleted
        prev = None
        while current_node and current_node.data != key:
            prev = current_node
            current_node = current_node.next

        # If the key is not present in the list
        if current_node is None:
            return

        # Unlink the node from the linked list
        prev.next = current_node.next
        current_node = None

# Example usage
linked_list = SinglyLinkedList()
linked_list.append(1)
linked_list.append(2)
linked_list.append(3)
linked_list.prepend(0)
linked_list.print_list()  # Output: 0 -> 1 -> 2 -> 3 -> None
linked_list.delete_node(2)
linked_list.print_list()  # Output: 0 -> 1 -> 3 -> None
