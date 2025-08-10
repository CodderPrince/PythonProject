import heapq

# Min-heap implementation (heapq is a min-heap by default)
min_heap = []

heapq.heappush(min_heap, 10)
heapq.heappush(min_heap, 5)
heapq.heappush(min_heap, 20)

print(heapq.heappop(min_heap))  # Output: 5
print(heapq.heappop(min_heap))  # Output: 10
print(heapq.heappop(min_heap))  # Output: 20
