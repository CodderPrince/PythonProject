# Initialize stacks for undo and redo operations
undo_stack = []
redo_stack = []

# Function to perform an edit operation
def edit(operation):
    undo_stack.append(operation)
    redo_stack.clear()

# Function to undo the last operation
def undo():
    if undo_stack:
        operation = undo_stack.pop()
        redo_stack.append(operation)
        return operation
    return None

# Function to redo the last undone operation
def redo():
    if redo_stack:
        operation = redo_stack.pop()
        undo_stack.append(operation)
        return operation
    return None

# Example usage
edit("type 'Hello'")
edit("type ' World'")
print(undo())  # Output: type ' World'
print(redo())  # Output: type ' World'
