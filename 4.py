def sum_to_n(n):
   
    if n == 1:
        return 1
    # Recursive case: sum of n is n plus sum of numbers from 1 to n-1
    else:
        return n + sum_to_n(n - 1)

# Example usage:
n = 5
print(f"The sum of the first {n} natural numbers is: {sum_to_n(n)}")
