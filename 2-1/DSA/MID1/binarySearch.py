# Binary Search
'''Prince | 12105007'''

# Main function
arr = [1, 3, 34, 45, 78, 113, 114, 124, 145, 160, 200]  # Changed to a list

left = 0
right = len(arr) - 1
find_item = 114

found = False  # Flag to track if the item is found

while left <= right:
    middle = left + (right - left) // 2

    if arr[middle] == find_item:
        print(f"Item found at index: {middle}")
        found = True
        break  # Exit the loop once the item is found

    elif arr[middle] < find_item:
        left = middle + 1

    else:
        right = middle - 1

if not found:
    print("Item not found!")
