def reverse_string(S):
    # Initialize an empty stack
    stack = []

    # Push each character of the string onto the stack
    for char in S:
        stack.append(char)
    
    # Initialize an empty string for the reversed string
    reversed_string = ""

    # Pop each character from the stack and append to the reversed string
    while stack:
        reversed_string += stack.pop()
    
    return reversed_string

# Example usage
S = "Hello, World!"
reversed_S = reverse_string(S)
print("Original string:", S)
print("Reversed string:", reversed_S)
