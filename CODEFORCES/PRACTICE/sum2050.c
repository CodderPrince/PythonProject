#include<stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        long long int n;
        scanf("%lld", &n);

        if (n % 2050 != 0) 
        {
            printf("-1\n");
        } 
        else 
        {
            long long int count = 0;
            n = n / 2050;

            while (n > 0) 
            {
                count = count + n % 10;
                n = n / 10;
            }

            printf("%lld\n", count);
        }
    }

    return 0;
}
