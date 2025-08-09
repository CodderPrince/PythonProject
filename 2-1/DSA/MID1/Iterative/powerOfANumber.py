# Power of a Number
# '''Prince | 12105007'''

def power(x, y):
    result = 1
    for _ in range(y):
        result *= x
    return result

# Test the function
print(power(2, 3))  # Output: 8
