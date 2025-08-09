# Sum of Digits of a Number
# '''Prince | 12105007'''

def sum_of_digits(n):
    total = 0
    while n > 0:
        total += n % 10
        n //= 10
    return total

# Test the function
print(sum_of_digits(12345))  # Output: 15
