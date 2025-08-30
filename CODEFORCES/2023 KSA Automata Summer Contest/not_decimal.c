//not decimal

#include <stdio.h>
#include <math.h>

int main() 
{
    double k;
    scanf("%lf", &k);

    double error_margin = 1e-6;
    int p = 1, q = 1;
    double fraction = (double)p / q;

    while (fabs(k - fraction) > error_margin) 
    {
        if (fraction < k) 
        {
            p++;
        } 
        else 
        {
            q++;
        }
        fraction = (double)p / q;
    }

    printf("YES\n");
    printf("%d %d\n", p, q);

    return 0;
}
