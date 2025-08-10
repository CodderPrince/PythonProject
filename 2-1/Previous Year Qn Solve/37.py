class Queue:
    def __init__(self, size):
        self.queue = [None] * size  # Initialize the queue with a fixed size
        self.front = -1  # Initialize the front pointer
        self.rear = -1   # Initialize the rear pointer
        self.size = size

    def is_full(self):
        return self.rear == self.size - 1

    def is_empty(self):
        return self.front == -1 or self.front > self.rear

    def enqueue(self, item):
        if self.is_full():
            print("Queue is full!")
            return
        if self.front == -1:  # If the queue is initially empty
            self.front = 0
        self.rear += 1
        self.queue[self.rear] = item
        print(f"Enqueued: {item}")

    def dequeue(self):
        if self.is_empty():
            print("Queue is empty!")
            return None
        item = self.queue[self.front]
        self.front += 1
        if self.front > self.rear:  # Reset the queue if it becomes empty
            self.front = self.rear = -1
        print(f"Dequeued: {item}")
        return item

    def display(self):
        if self.is_empty():
            print("Queue is empty!")
        else:
            print("Queue elements are:")
            for i in range(self.front, self.rear + 1):
                print(self.queue[i], end=" ")
            print()

# Example usage
q = Queue(5)
q.enqueue(10)
q.enqueue(20)
q.enqueue(30)
q.display()
q.dequeue()
q.display()
