def fibonacci_memo(n, memo={}):
    if n <= 0:
        return 0
    elif n == 1:
        return 1
    if n not in memo:
        memo[n] = fibonacci_memo(n-1, memo) + fibonacci_memo(n-2, memo)
    return memo[n]

# Example usage:
n = 10
print(f"Fibonacci number F({n}) is {fibonacci_memo(n)}")
