# Decimal to Binary [Using Array]
'''Prince | 12105007'''


def conBin(n):
    sumArray = [0] * n
    ''' n   =   5
    value:  0   0   0   0   0
    index:  0   1   2   3   4
    '''
    i = 0
    while n != 0:
        sumArray[i] = n % 2
        n = int(n // 2)
        i = i + 1  

    '''create a temporary array to store value'''
    tempArray = [0] * i
    k = 0

    # reversed
    '''range(start, stop, step)'''
    for j in range(i - 1, -1, -1):
        tempArray[k] = sumArray[j]
        k = k + 1

    return tempArray


# main
n = int(input("Enter decimal number: "))

result = conBin(n)

'''convert list to general format
''.join(map(split_function, initial_array))
'''
print(f"Decimal {n} convert Binary: {''.join(map(str, result))}")

