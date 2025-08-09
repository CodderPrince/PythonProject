# Decimal to Binary [Using List Array]
'''Prince | 12105007'''


def conBin(n):
    sumArray = [0] * n
    
    i = 0
    while n != 0:
        sumArray[i] = n % 2
        n = int(n // 2)
        i = i + 1  

    # reversed
    '''range(start, stop, step)'''
    for j in range(i - 1, -1, -1):
        print(sumArray[j], end="")


# main
n = int(input("Enter decimal number: "))

conBin(n)

