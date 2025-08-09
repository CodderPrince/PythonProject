'Problem no: 5'
'Climbing Stairs'
'Optimize DP solution'


# create solve function
def solve(n):
    'create dp array: vector<int>dp(n+2,0)'
    dp = [0] * (n + 2)  # Initialize a list of size n+2 with all elements as 0

    # Base cases
    dp[0] = 0
    dp[1] = 1
    dp[2] = 2

    if n <= 2:
        return dp[n]
    else:
        for i in range(3, n+1):
            dp[i] = dp[i-1] + dp[i-2]
        return dp[n]


if __name__ == "__main__":
    n = int(input("Enter the number of stairs: "))
    sol = solve(n)
    print(f"The total number of distinct ways: {sol}")
