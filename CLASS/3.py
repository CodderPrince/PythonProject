def fact(n):
    if n == 1:
        return 1

    return n*fact(n-1)


# if __name__ == "__main__":

   # n = int(input("Enter a number to calculate factorial: "))
print(fact(5))
