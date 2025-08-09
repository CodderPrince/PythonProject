"""
Problem: Find a largest element in a unsorted array
approach: Divide and Conquer
"""


def divide_and_conquer(arr, left, right):
    # base case when single element only
    if left == right:
        return arr[left]
    
    # calculate mid
    mid = left + (right - left) // 2
    
    # find left max
    left_max = divide_and_conquer(arr, left, mid)

    # find right max
    right_max = divide_and_conquer(arr, mid + 1, right)

    # take decision
    if left_max > right_max:
        return left_max
    else:
        return right_max

    
if __name__ == "__main__":
    arr = [12, 7, 9, 21, 5, 6, 14]
    n = len(arr)

    # called function
    result = divide_and_conquer(arr, 0, n - 1)

    # print
    print(f"\nMaximum value of this array: {result}\n")
