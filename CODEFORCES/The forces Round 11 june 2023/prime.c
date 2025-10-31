//PRINCE

#include <stdio.h>

int prime(int n)
{
    long long int i;
    if (n <= 1)
    {
        return 0;
    }
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    if (i * i > n)
    {
        return 1;
    }
}
int main()
{
    long long int t;
    scanf("%lld", &t);
    while (t--)
    {
        long long int n;
        scanf("%lld", &n);
        if (prime(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}