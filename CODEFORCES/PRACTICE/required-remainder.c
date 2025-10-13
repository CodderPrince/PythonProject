// prince

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {

        long long int x, y, n, m, k, i;
        scanf("%lld %lld %lld", &x, &y, &n);
        m = (n - y) / x;
        k = m * x + y;
        printf("%lld\n", k);
    }

    return 0;
}
