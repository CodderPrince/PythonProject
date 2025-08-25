def fact(n):
    if (n == 1):
        return 1
    else:
        return n*fact(n-1)


def main():
    n = int(input("Enter a number to calculate factorial: "))
    print(fact(n))


if __name__ == "__main__":
    main()
