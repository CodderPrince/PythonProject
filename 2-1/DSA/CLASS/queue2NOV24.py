'''Function to evaluate a postfix expression'''
def evaluate_postfix(expression):
    stack = []  # Initialize an empty stack

    '''Iterate through each character in the expression'''
    for char in expression.split():
        # If the character is a number, push it onto the stack
        if char.isdigit():
            stack.append(int(char))
        else:
            # If the character is an operator, pop two operands
            operand2 = stack.pop()  # Second operand
            operand1 = stack.pop()  # First operand

            '''Perform the operation and push the result back'''
            if char == '+':
                stack.append(operand1 + operand2)
            elif char == '-':
                stack.append(operand1 - operand2)
            elif char == '*':
                stack.append(operand1 * operand2)
            elif char == '/':
                stack.append(int(operand1 / operand2))  # Integer division

    '''Return the final result in the stack'''
    return stack.pop()

# Example usage:
expression = input("Enter a postfix expression (e.g., '3 4 + 2 *'): ")
result = evaluate_postfix(expression)
print(f"Result: {result}")
