# Calculate nCr binomial coefficient for n and r
'''Prince | 12105007'''


def fact(n):
    if n == 0:
        return 1
    else:
        return n * fact(n - 1)


# main
n = int (input("Enter number n: "))
r = int(input("Enter number r: "))

factN = fact(n)
factR = fact(r)
factNR = fact(n - r)

# print(factN)
# print(factR)
# print(factNR)

nCr = factN / (factR * factNR)

print(f"nCr of {n} and {r} is = {nCr}")
