# merge sort algorithm


def merge(arr, l, mid, r):
    # Sizes of the two subarrays
    n1 = mid - l + 1
    n2 = r - mid

    # Create temporary arrays
    a = [0] * n1
    b = [0] * n2

    # Copy data to temp arrays a[] and b[]
    for i in range(n1):
        a[i] = arr[l + i]
    
    for i in range(n2):
        b[i] = arr[mid + 1 + i]

    # Merge the temp arrays back into arr[l..r]
    i, j, k = 0, 0, l

    # Merge until one of the subarrays is exhausted
    while i < n1 and j < n2:
        if a[i] < b[j]:
            arr[k] = a[i]
            i += 1
        else:
            arr[k] = b[j]
            j += 1
        k += 1

    # Copy the remaining elements of a[], if any
    while i < n1:
        arr[k] = a[i]
        i += 1
        k += 1

    # Copy the remaining elements of b[], if any
    while j < n2:
        arr[k] = b[j]
        j += 1
        k += 1


def merge_sort(arr, l, r):
    if l < r:  # when more than one element
        mid = l + (r - l) // 2

        # Sort first and second halves
        merge_sort(arr, l, mid)
        merge_sort(arr, mid + 1, r)

        # Merge the sorted halves
        merge(arr, l, mid, r)


if __name__ == "__main__":
    arr = [5, 4, 3, 1, 2]
    merge_sort(arr, 0, len(arr) - 1)
    
    # Print the sorted array
    print("Sorted array:", arr)
