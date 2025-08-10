import heapq

# To create a max-heap, we use a min-heap with negated values
class MaxHeap:
    def __init__(self):
        self.heap = []

    def push(self, item):
        heapq.heappush(self.heap, -item)

    def pop(self):
        return -heapq.heappop(self.heap)

    def peek(self):
        return -self.heap[0]

max_heap = MaxHeap()
max_heap.push(10)
max_heap.push(5)
max_heap.push(20)

print(max_heap.peek())  # Output: 20
print(max_heap.pop())   # Output: 20
print(max_heap.pop())   # Output: 10
print(max_heap.pop())   # Output: 5
