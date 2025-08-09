'''Function to check balanced parentheses'''
def is_balanced(expression):
    stack = []  # Initialize an empty stack
    pairs = {')': '(', '}': '{', ']': '['}  # Matching pairs of parentheses

    '''Iterate through each character in the expression'''
    for char in expression:
        if char in "({[":  # If it's an opening parenthesis
            stack.append(char)
        elif char in ")}]":  # If it's a closing parenthesis
            # Check if stack is empty or top doesn't match
            if not stack or stack.pop() != pairs[char]:
                return False

    '''Check if stack is empty at the end'''
    return not stack

# Example usage:
expression = input("Enter an expression with parentheses and numbers: ")
if is_balanced(expression):
    print("The parentheses are balanced.")
else:
    print("The parentheses are not balanced.")
