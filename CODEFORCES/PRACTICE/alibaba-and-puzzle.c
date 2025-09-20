// prince

#include <stdio.h>

int main()
{
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if ((a + b - c) == d)
    {
        printf("YES\n");
    }
    else if (a + (b * c) == d)
    {
        printf("YES\n");
    }
    else if (a - b + c == d)
    {
        printf("YES\n");
    }
    else if (a - (b * c) == d)
    {
        printf("YES\n");
    }
    else if ((a * b) + c == d)
    {
        printf("YES\n");
    }
    else if ((a * b) - c == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}