// the rank
// prince

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c, d, x, count = 1, sum = 0, sum1 = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sum = a + b + c + d;
    x = n - 1;
    while (x--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        sum1 = a + b + c + d;
        if (sum1 > sum)
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}