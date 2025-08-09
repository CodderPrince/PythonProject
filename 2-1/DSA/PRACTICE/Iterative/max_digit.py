# Find the Maximum Digit in a Number
# '''Prince | 12105007'''

def max_digit(n):
    max_digit = 0
    while n > 0:
        max_digit = max(max_digit, n % 10)
        n //= 10
    return max_digit

# Test the function
print(max_digit(35876))  # Output: 8
