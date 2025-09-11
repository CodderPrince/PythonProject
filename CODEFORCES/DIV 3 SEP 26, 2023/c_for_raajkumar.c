//raajkumar_30

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main() 
{
    int p;
    scanf("%d", &p);

    while (p--) 
    {
        long long int n, k, x;
        scanf("%lld %lld %lld", &n, &k, &x);
        long long int minsum = (k * (k + 1)) / 2;
        long long int maxsum = (n * (n + 1)) / 2 - (n - k) * (n - k + 1) / 2;

        if (x >= minsum && x <= maxsum) 
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
