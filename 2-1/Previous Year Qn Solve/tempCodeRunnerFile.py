def max_heapify(arr, n, i):
    largest = i
    left = 2 * i + 1
    right = 2 * i + 2

    if left < n and arr[left] > arr[largest]:
        largest = left

    if right < n and arr[right] > arr[largest]:
        largest = right

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        max_heapify(arr, n, largest)

def left(i):
    return 2 * i + 1

def right(i):
    return 2 * i + 2

def parent(i):
    return (i - 1) // 2

class MaxPriorityQueue:
    def __init__(self):
        self.heap = []
        self.heap_size = 0

    def insert(self, key):
        self.heap_size += 1
        self.heap.append(float('-inf'))
        self.increase_key(self.heap_size - 1, key)

    def maximum(self):
        if self.heap_size > 0:
            return self.heap[0]
        return None

    def extract_max(self):
        if self.heap_size < 1:
            raise IndexError("Heap underflow")
        max_element = self.heap[0]
        self.heap[0] = self.heap[self.heap_size - 1]
        self.heap_size -= 1
        self.heap.pop()
        max_heapify(self.heap, self.heap_size, 0)
        return max_element

    def increase_key(self, i, key):
        if key < self.heap[i]:
            raise ValueError("New key is smaller than current key")
        self.heap[i] = key
        while i > 0 and self.heap[parent(i)] < self.heap[i]:
            self.heap[i], self.heap[parent(i)] = self.heap[parent(i)], self.heap[i]
            i = parent(i)

    def print_heap(self):
        print(self.heap)

if __name__ == "__main__":
    pq = MaxPriorityQueue()

    # Insert elements into the max-priority queue
    pq.insert(10)
    pq.insert(20)
    pq.insert(15)
    pq.insert(30)
    pq.insert(40)

    # Print the heap
    print("Max-Heap:", pq.heap)

    # Get the maximum element
    print("Maximum element:", pq.maximum())

    # Extract the maximum element
    print("Extracted max element:", pq.extract_max())
    print("Max-Heap after extraction:", pq.heap)

    # Increase key of element at index 2 to 35
    pq.increase_key(2, 35)
    print("Max-Heap after increase-key:", pq.heap)
