#include <stdio.h>

int palindrome(int num)
{
    int reverse = 0;
    int original = num;

    while (num > 0)
    {
        int remainder = num % 2;
        reverse = reverse * 2 + remainder;
        num = num/2;
    }

    return original == reverse;
}

int main()
{
    int N;
    scanf("%d", &N);

    if (N % 2 == 1 && palindrome(N))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
