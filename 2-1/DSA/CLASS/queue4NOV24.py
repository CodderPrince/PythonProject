'''Function to find next greater elements'''
def next_greater_element(arr):
    stack = []  # Stack to keep track of elements
    result = []  # List to store results

    '''Traverse the array from right to left'''
    for num in reversed(arr):
        # Pop elements from the stack until finding a greater element
        while stack and stack[-1] <= num:
            stack.pop()
        
        # If the stack is empty, no greater element exists
        if not stack:
            result.append(-1)
        else:
            result.append(stack[-1])  # Top of the stack is the next greater element
        
        # Push the current element onto the stack
        stack.append(num)

    # Reverse the result to match the original order of the array
    return result[::-1]

# Example usage:
array = list(map(int, input("Enter the array (space-separated): ").split()))
output = next_greater_element(array)
print("Next Greater Elements:", output)
