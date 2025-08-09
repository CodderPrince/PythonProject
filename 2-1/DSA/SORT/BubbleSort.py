'''Bubble Sort'''


def bubbleSort(arr):

    n = len(arr)
    '''for i 0 to n
        for j 0 to n - i - 1'''
    for i in range(0, n):
        swapped = False
        print(f"Initial Swapped: {swapped}")

        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:  # Current index value is bigger
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True
                print(f"Changed Swapped: {swapped}")
        
        # check every pass
        print(f"Passed {i+1}: {arr}\n")

        # if no swapped needed
        if not swapped:
            print(f"If condition true!\nSwapped is False")
            break

        
# main function
# arr = [45, 20, 50, 15, 10]
arr = [10, 15, 20, 50, 45]
print(f"\nInitial Array: {arr}\n")

bubbleSort(arr)
print(f"\nSorted Array: {arr}\n")

