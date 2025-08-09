def fact(n):
    if n == 1:
        return 1
    else:
        return n * fact(n - 1)


def main():
    n = int(input("Enter a number: "))

    print(f"The factorial of {n} is {fact(n)}")


if __name__ == "__main__":
    main()
