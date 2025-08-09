# Balanced Parentheses.


def is_valid_parentheses(s):
    # Dictionary to hold matching pairs
    matching_bracket = {')': '(', '}': '{', ']': '['}
    
    # Stack to hold opening brackets
    stack = []

    # Traverse each character in the input string
    for char in s:
        if char in matching_bracket:  # If it's a closing bracket
            top_element = stack.pop() if stack else '#'  # Pop from stack or use a dummy value
            if matching_bracket[char] != top_element:
                return False
        else:
            # It's an opening bracket, push it onto the stack
            stack.append(char)
    
    # If the stack is empty, all brackets are balanced
    return not stack


# Test examples
print(is_valid_parentheses("()"))  # Output: True
print(is_valid_parentheses("()[]{}"))  # Output: True
print(is_valid_parentheses("(]"))  # Output: False
print(is_valid_parentheses("([)]"))  # Output: False
print(is_valid_parentheses("{[]}"))  # Output: True
