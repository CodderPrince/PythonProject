# insertion sort


def selection_sort(arr):
    n = len(arr)
    for i in range(0, n):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[i], arr[min_index] = arr[min_index], arr[i]
        print(f"Passed {i+1}: {arr}")


# Example
arr = [5, 2, 1, 3, 4]
selection_sort(arr)
print(f"\nSorted array:{arr}\n")
