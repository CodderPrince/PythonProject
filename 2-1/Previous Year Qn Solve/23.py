import heapq

class PriorityQueue:
    def __init__(self):
        self.heap = []

    def enqueue(self, item):
        # Add the new item to the heap
        heapq.heappush(self.heap, item)

    def dequeue(self):
        # Remove and return the smallest item from the heap
        return heapq.heappop(self.heap)

    def peek(self):
        # Return the smallest item without removing it
        return self.heap[0] if self.heap else None

    def is_empty(self):
        # Check if the priority queue is empty
        return len(self.heap) == 0

# Example usage:
pq = PriorityQueue()
pq.enqueue(5)
pq.enqueue(3)
pq.enqueue(8)
pq.enqueue(1)

print("Dequeued:", pq.dequeue())  # Output: 1
print("Peek:", pq.peek())  # Output: 3
print("Dequeued:", pq.dequeue())  # Output: 3
print("Is empty:", pq.is_empty())  # Output: False
print("Dequeued:", pq.dequeue())  # Output: 5
print("Dequeued:", pq.dequeue())  # Output: 8
print("Is empty:", pq.is_empty())  # Output: True
