def find_max(arr, n):
    # Base case: if the array has only one element
    if n == 1:
        return arr[0]
    
    # Recursive case: find the maximum of the rest of the array
    max_in_rest = find_max(arr, n - 1)
    
    # Compare the last element with the maximum of the rest of the array
    return max(arr[n - 1], max_in_rest)

# Example usage:
if __name__ == "__main__":
    arr = [12, 7, 9, 21, 5, 6, 14]
    n = len(arr)
    
    result = find_max(arr, n)
    print(f"The maximum value in the array is: {result}")
