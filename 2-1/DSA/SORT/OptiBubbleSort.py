# Optimize Bubble Sort


def optBubSort(arr):
    n = len(arr)

    for i in range(0, n):
        swap = False

        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swap = True

        if not swap:
            break


# Main
arr = [45, 20, 15, 10, 50]
print(f"\nInitial Array: {arr}\n")

optBubSort(arr)
print(f"\nSorted Arrayy: {arr}\n")
