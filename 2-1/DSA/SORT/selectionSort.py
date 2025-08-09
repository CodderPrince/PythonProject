# optimize selection sort
'''Prince | 12105007'''


def selectionSort(arr):
    n = len(arr)
    for i in range (0, n):
        min_element = i
        for j in range(i + 1, n):
            if arr[j] < arr[i]:
                min_element = j
                arr[i], arr[min_element] = arr[min_element], arr[i]


# main
arr = [5, 2, 1, 3, 4]

print(f"\nBefore Sorting: {arr}")
selectionSort(arr)
print(f"\nAfter Sorting: {arr}\n")
