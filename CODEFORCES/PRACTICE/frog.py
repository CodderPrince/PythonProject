
def main():
    n = int(input())
    m = int(input())
    arr = []

    arr = list(map(int, input().split()))

    dp = [0] * n

    dp[1] = abs(arr[1] - arr[0])

    for i in range(2, n):
        ways1 = dp[i-1] + abs(arr[i] - arr[i-1])
        ways2 = dp[i-2] + abs(arr[i] - arr[i-2])
        dp[i] = min(ways1, ways2)

    print(dp[n-1])


if __name__ == "__main__":
    main()
