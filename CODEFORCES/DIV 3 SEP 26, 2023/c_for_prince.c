//prince

#include <stdio.h>
#include<math.h>

int main() 
{
    int m;
    scanf("%d", &m);

    while (m--) 
    {
        long long int y, k, x;
        scanf("%lld %lld %lld", &y, &k, &x);
        long long int sum1 = (k * (k + 1)) / 2;
        long long int sum2 = (y * (y + 1)) / 2 - (y - k) * (y - k + 1) / 2;

        if (x >= sum1 && x <= sum2)
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
