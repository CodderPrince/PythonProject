def quick_sort(arr, low, high):
    if low < high:
        # Partition the array and get the pivot index
        pivot_index = partition(arr, low, high)
        
        # Recursively sort elements before and after the pivot
        quick_sort(arr, low, pivot_index - 1)
        quick_sort(arr, pivot_index + 1, high)

def partition(arr, low, high):
    # Choose the last element as the pivot
    pivot = arr[high]
    i = low - 1
    
    # Iterate through the array
    for j in range(low, high):
        # If current element is less than or equal to pivot, swap
        if arr[j] <= pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    
    # Place the pivot in its correct position
    arr[i + 1], arr[high] = arr[high], arr[i + 1]
    return i + 1

# Initial list
arr = [0, 15, 7, 27, 4, 5]
print("Original list:", arr)

# Perform QuickSort
quick_sort(arr, 0, len(arr) - 1)

# Sorted list
print("Sorted list:", arr)
