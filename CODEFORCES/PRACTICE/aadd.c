// PRINCE

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int x, y, max, sum = 0;
        scanf("%d %d", &x, &y);
        if (x > y)
        {
            max = x;
            x = y;
            y = max;
        }
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        printf("%d\n", sum);
    }

    return 0;
}