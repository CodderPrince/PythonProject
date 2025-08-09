# Factorial
'''Prince | 12105007'''


def fact(n):
    if n == 0:
        return 1
    
    else:
        return n * fact(n - 1)

    
# main
t = int (input("Test case: "))
while t != 0:
    n = input()
    #n = int (input("Enter the number: "))
    print(f"Factorial: {fact(n)}")
    t = t - 1
