# Number of Digits in a Number
# '''Prince | 12105007'''

def count_digits(n):
    count = 0
    while n > 0:
        count += 1
        n //= 10
    return count

# Test the function
print(count_digits(987654))  # Output: 6
