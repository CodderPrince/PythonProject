/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>
#include<math.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        long long int n, k, x;
        scanf("%lld %lld %lld", &n, &k, &x);
        long long int min = (k * (k + 1)) / 2;
        long long int max = (n * (n + 1)) / 2 - (n - k) * (n - k + 1) / 2;

        if (x >= min && x <= max) 
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
