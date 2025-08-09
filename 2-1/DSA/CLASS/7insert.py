def insertion_sort(arr):
    # Traverse through the array
    for i in range(1, len(arr)):
        key = arr[i]
        print(key)
        j = i - 1

        # Move elements of arr[0...i-1] that are greater than key, one position ahead of their current position
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            print(arr)
            j -= 1
        arr[j + 1] = key
        print(arr)

    return arr

# Example usage
arr = [12, 11, 13, 5, 6]
sorted_arr = insertion_sort(arr)
print("Sorted array is:", sorted_arr)
