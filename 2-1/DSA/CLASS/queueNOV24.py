# Initialize the queue
queue = []  # Use a list to represent the queue
front = 0   # Index of the front element
rear = -1   # Index of the last element

# Function to enqueue an item
def enqueue(item):
    global rear
    rear += 1  # Move rear forward
    if rear < len(queue):
        queue[rear] = item  # Overwrite existing space if available
    else:
        queue.append(item)  # Add new space if needed

# Function to dequeue an item
def dequeue():
    global front
    if not is_empty():
        item = queue[front]  # Get the front item
        front += 1  # Move front forward
        return item
    else:
        return None

# Function to peek the item at the front of the queue
def peek():
    if not is_empty():
        return queue[front]  # Return the front element
    else:
        return None

# Function to check if the queue is empty
def is_empty():
    return front > rear  # Queue is empty if front has passed rear

# Function to print the current queue
def print_queue():
    if is_empty():
        print("Current Queue: []")
    else:
        print("Current Queue:", queue[front:rear + 1])  # Slice valid elements

# Main program using the queue functions
for i in range(3):
    item = int(input(f"Enter item {i+1} to enqueue: "))
    enqueue(item)

# Dequeue an item
dequeued_item = dequeue()
if dequeued_item is not None:
    print(f"Item dequeued: {dequeued_item}")
else:
    print("Queue is empty. Could not dequeue.")

# Peek the item at the front of the queue
peeked_item = peek()
if peeked_item is not None:
    print(f"Item at the front of the queue: {peeked_item}")
else:
    print("Queue is empty. Could not peek.")

# Print the current queue
print_queue()
