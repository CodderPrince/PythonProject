n = int(input())

arr = list(map(int, input().split()))

# O(n^3)
for i in range(n):
    for j in range(n):
        for k in range(n):
            # Do something

# O(n^2)
for i in range(n):
    for j in range(n):
        # Do something

# O(n log n)
sorted(arr) # Using a comparison-based sorting algorithm like quicksort or merge sort

# O(n)
for i in range(n):
    # Do something

# O(log n)
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

# O(1)
def add_numbers(a, b):
    return a + b