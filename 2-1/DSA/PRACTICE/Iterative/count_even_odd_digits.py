# Counting Even and Odd Digits in a Number
# '''Prince | 12105007'''

def count_even_odd_digits(n):
    even_count = 0
    odd_count = 0
    while n > 0:
        digit = n % 10
        if digit % 2 == 0:
            even_count += 1
        else:
            odd_count += 1
        n //= 10
    return even_count, odd_count

# Test the function
even, odd = count_even_odd_digits(123456)
print(f"Even digits: {even}, Odd digits: {odd}")  # Output: Even digits: 3, Odd digits: 3
