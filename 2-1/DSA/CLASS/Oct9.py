# Binary Search Algorithm
def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = left + (right - left) // 2  # Calculate middle index
        
        if arr[mid] == target:
            return mid  # Target found
        
        elif arr[mid] < target:
            left = mid + 1  # Search in the right half
        
        else:
            right = mid - 1  # Search in the left half
    
    return -1  # Target not found


# Example usage:
if __name__ == "__main__":
    # Example sorted array
    arr = [2, 3, 4, 9, 10, 12, 15, 17]
    
    # Example target
    target = 9
    
    # Call binary search
    result = binary_search(arr, target)
    
    # Output result
    if result != -1:
        print(f"Element {target} found at index {result}.")
    else:
        print(f"Element {target} not found in the array.")
