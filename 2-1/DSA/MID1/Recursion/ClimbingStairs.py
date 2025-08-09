'Problem no: 5'
'Climbing Stairs'

# create solve function


def solve(n):
    if n == 1:
        return 1
    if n == 2:
        return 2
    else:
        return solve(n - 1) + solve(n - 2)


if __name__ == "__main__":
    n = int(input("Enter the number of stairs: "))
    result = solve(n)
    print(f"Total number of distinct ways are: {result}")
