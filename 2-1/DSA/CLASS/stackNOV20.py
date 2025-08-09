class Stack:
    def __init__(self):
        self.stack = []

    # Push item onto stack
    def push(self, item):
        self.stack.append(item)

    # Pop item from stack by index
    def pop_at_index(self, index):
        if 0 <= index < len(self.stack):
            return self.stack.pop(index)
        else:
            return None

    # Peek the item at a specific index
    def peek_at_index(self, index):
        if 0 <= index < len(self.stack):
            return self.stack[index]
        else:
            return None

    # Check if the stack is empty
    def is_empty(self):
        return len(self.stack) == 0

    # Print the current stack
    def print_stack(self):
        print("Current Stack:", self.stack)

# Create a stack object
stack = Stack()

# Push 3 items (user input)
for i in range(3):
    item = int(input(f"Enter item {i+1} to push onto the stack: "))
    stack.push(item)

# Ask user which index to pop
index_to_pop = int(input("Enter the index of the item you want to pop: "))

# Pop the item at the specified index
popped_item = stack.pop_at_index(index_to_pop)
if popped_item is not None:
    print(f"Item popped from index {index_to_pop}: {popped_item}")
else:
    print(f"Invalid index. Could not pop item.")

# Ask user which index to peek
index_to_peek = int(input("Enter the index of the item you want to peek at: "))

# Peek the item at the specified index
peeked_item = stack.peek_at_index(index_to_peek)
if peeked_item is not None:
    print(f"Item at index {index_to_peek}: {peeked_item}")
else:
    print(f"Invalid index. Could not peek item.")

# Print the current stack
stack.print_stack()
