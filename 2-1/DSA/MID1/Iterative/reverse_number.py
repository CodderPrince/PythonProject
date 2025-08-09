# Reverse a Number
# '''Prince | 12105007'''

def reverse_number(n):
    reversed_num = 0
    while n > 0:
        reversed_num = reversed_num * 10 + n % 10
        n //= 10
    return reversed_num

# Test the function
print(reverse_number(54321))  # Output: 12345
