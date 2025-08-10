n = int(input("Enter the value of n: "))
arr = list(map(int, input("Enter the elements of the array (space-separated): ").split()))

print("The input array is:", arr)

# O(n^3)
print("\nO(n^3) example:")
for i in range(n):
    for j in range(n):
        for k in range(n):
            # You can add any computation here
            print(f"i={i}, j={j}, k={k}")

# O(n^2)
print("\nO(n^2) example:")
for i in range(n):
    for j in range(n):
        # You can add any computation here
        print(f"i={i}, j={j}")

# O(n log n)
print("\nO(n log n) example (sorting):")
sorted_arr = sorted(arr)
print("Sorted array:", sorted_arr)

# O(n)
print("\nO(n) example:")
for i in range(n):
    # You can add any computation here
    print(f"i={i}")

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

print("\nO(log n) example (binary search):")
target = int(input("Enter the target value to search: "))
index = binary_search(arr, target)
if index == -1:
    print(f"Target {target} not found in the array.")
else:
    print(f"Target {target} found at index {index}.")

# O(1)
def add_numbers(a, b):
    return a + b

print("\nO(1) example (add numbers):")
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))
result = add_numbers(a, b)
print(f"The sum of {a} and {b} is {result}.")