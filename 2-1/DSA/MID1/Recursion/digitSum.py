# Digit sum of a number
'''Prince | 12105007'''


def digitSum(n):
    # n = 123
    sum = 0
    if n == 0:
        return sum
    
    while n != 0:
        x = n % 10  # 3
        sum = sum + x
        n = n // 10
        
    return sum  # use this cause 0.123 is not == 0 so need to return sum for output


# main
n = int(input("Enter the number: "))

print(f"{n} number digit sum: {digitSum(n)}")
