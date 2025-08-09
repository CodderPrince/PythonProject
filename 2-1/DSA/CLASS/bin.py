

def binarySearch(arr, target):
    left = 0
    right = len(arr) - 1

    while left <= right:
        # mid
        mid = left + (right - left) // 2

        # base case
        if arr[mid] == target:
            return mid 
        
        elif arr[mid] < target:
            left = mid + 1
        
        else:  # arr[mid] > target
            right = mid - 1
    
    # if all check then not found
    return -1


if __name__ == "__main__":
    arr = [10, 12, 15, 22, 27, 38]
    target = 22
    result = binarySearch(arr, target)

    if result != -1:
        print(f"\nTarget value {target} found at index: {result}\n")
    
    else:
        print(f"\nTarget value {target} not found!\n")
