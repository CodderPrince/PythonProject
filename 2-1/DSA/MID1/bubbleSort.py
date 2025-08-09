# optimize bubble sort
'''Prince | 12105007'''


def bubbleSort(arr):
    n = len(arr)

    for i in range(0, n):
        swap = False
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swap = True

        if not swap:
            break


# main
arr = [45, 20, 50, 15, 10]
print(f"\nBefore Sorting: {arr}")
bubbleSort(arr)
print(f"\nAfter Sorting: {arr}\n")

