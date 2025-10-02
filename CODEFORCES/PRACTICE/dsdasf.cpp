#include <stdio.h>
int main()
{
    int i, j, count = 0, n;
    scanf("%d", &n);
    int temp[n], k = 0;
    for (i = 2; i <= n; i++)
    {
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
        {
            count++;
            temp[k] = i;
            k++;
        }
    }

    printf("%d\n ", count);
    for (i = 0; i < count; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
}