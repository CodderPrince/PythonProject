def main():
    n = int(input())  # Input the number of elements
    arr = []

    # Input all elements using a for loop
    for i in range(n):
        element = int(input(f"Enter element {i + 1}: "))
        arr.append(element)

    # Create dp array
    dp = [0] * n

    # Initialize dp[1]
    if n > 1:
        dp[1] = abs(arr[1] - arr[0])

    # Fill dp array using the recurrence relation
    for i in range(2, n):
        ways1 = dp[i - 1] + abs(arr[i] - arr[i - 1])
        ways2 = dp[i - 2] + abs(arr[i] - arr[i - 2])
        dp[i] = min(ways1, ways2)

    print(dp[n - 1])  # Output the final result


if __name__ == "__main__":
    main()
