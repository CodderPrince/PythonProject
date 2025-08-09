def dac(arr, low, high):
    # Base case: if there's only one element
    if low == high:
        return arr[low]
    
    # Find the middle index
    mid = (low + high) // 2
    
    # Recursively find the maximum in both halves
    max_left = dac(arr, low, mid)
    max_right = dac(arr, mid + 1, high)
    
    # Return the larger of the two
    if max_left > max_right:
        return max_left
    else:
        return max_right

# Example usage:
if __name__ == "__main__":
    arr = [12, 7, 9, 21, 5, 6, 14]
    n = len(arr)
    
    result = dac(arr, 0, n - 1)
    print(f"The maximum value in the array is: {result}")
