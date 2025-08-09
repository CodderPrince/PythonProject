# Factorial of a Number
# '''Prince | 12105007'''

def factorial(n):
    result = 1
    for i in range(1, n + 1):
        result *= i
    return result

# Test the function
print(factorial(5))  # Output: 120
