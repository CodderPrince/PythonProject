//hard_compare.c
//prince

#include <stdio.h>
#include <math.h>

int main() 
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if ((b * log(a)) > (d * log(c) )) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}
