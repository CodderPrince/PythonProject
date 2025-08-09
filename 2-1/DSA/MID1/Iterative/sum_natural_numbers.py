# Sum of Natural Numbers
# '''Prince | 12105007'''

def sum_natural_numbers(n):
    total = 0
    for i in range(1, n + 1):
        total += i
    return total

# Test the function
print(sum_natural_numbers(5))  # Output: 15
