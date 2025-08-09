# optimize merge sort
'''Prince | 12105007'''


def mergeArray(arr, left, mid, right):
    # Sizes of subarrays
    n1 = mid - left + 1
    n2 = right - mid

    # Temporary subarrays
    arr1 = [0] * n1
    arr2 = [0] * n2

    # Fill subarrays
    for i in range(n1):
        arr1[i] = arr[left + i]

    for j in range(n2):
        arr2[j] = arr[mid + 1 + j]

    # Merge subarrays
    i = j = 0
    k = left

    while i < n1 and j < n2:
        if arr1[i] <= arr2[j]:
            arr[k] = arr1[i]
            i += 1
        else:
            arr[k] = arr2[j]
            j += 1
        k += 1

    # Copy remaining elements, if any
    while i < n1:
        arr[k] = arr1[i]
        i += 1
        k += 1

    while j < n2:
        arr[k] = arr2[j]
        j += 1
        k += 1


def mergeSort(arr, left, right):
    # Base case: single element
    if left == right:
        return

    mid = left + (right - left) // 2

    # Recursively sort first and second halves
    mergeSort(arr, left, mid)
    mergeSort(arr, mid + 1, right)

    # Merge sorted halves
    mergeArray(arr, left, mid, right)


# Main
arr = [5, 4, 1, 3, 2]
print(f"\nBefore Sorting: {arr}")

mergeSort(arr, 0, len(arr) - 1)
print(f"\nAfter Merge Sort: {arr}\n")
