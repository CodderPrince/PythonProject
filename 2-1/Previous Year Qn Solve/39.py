def factorial(n):
  """
  This function calculates the factorial of an integer n recursively.

  Args:
    n: An integer.

  Returns:
    The factorial of n, or 1 if n is 0.
  """
  if n == 0:
    return 1
  else:
    return n * factorial(n - 1)

# Example usage
number = 5
result = factorial(number)
print(f"The factorial of {number} is {result}")