# Decimal to Binary [Using List Array]
'''Prince | 12105007'''


def conBin(n):
    sum = []
    while n != 0:
        mod = n % 2
        sum.append(mod)
        n = n // 2  
    sum.reverse()  
    return sum


# main
n = int(input("Enter decimal number: "))

res = conBin(n)
print(f"Decimal {n} to Binary: {''.join(map(str, res))}")
