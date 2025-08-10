// recursive function (factorial)
//prince

#include <stdio.h>

int factorial(int number);
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    factorial(number);
    printf("%d factorial is: %d\n", number, factorial(number));

    return 0;
}

int factorial(int number)
{
    if (number <= 1)
    {
        return 1;
    }
    else
    {
        return number * factorial(number - 1);
    }
}