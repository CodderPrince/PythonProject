// Hacker_3.0

#include <stdio.h>

int Sum(int n);

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int m, k;
        scanf("%d %d", &m, &k);

        while (1)
        {
            if (Sum(m) % k == 0)
            {
                printf("%d\n", m);
                break;
            }
            m++;
        }
    }

    return 0;
}

int Sum(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}
