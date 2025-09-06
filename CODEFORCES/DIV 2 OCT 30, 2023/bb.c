#include <stdio.h>
#define ll long long int

int main()
{

    ll t, i, num, j, fact = 1;

    scanf("%lld", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &num);

        for (j = num; j >= 1; j--)
        {
            fact = fact * j;
        }
        printf("%lld\n", fact);
        fact = 1;
    }
}