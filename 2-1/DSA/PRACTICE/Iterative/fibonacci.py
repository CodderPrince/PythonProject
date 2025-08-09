# Fibonacci Series
# '''Prince | 12105007'''

def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        print(a, end=" ")
        a, b = b, a + b

# Test the function
fibonacci(6)  # Output: 0 1 1 2 3 5
