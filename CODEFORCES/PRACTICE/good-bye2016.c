#include <stdio.h>

int main()
{
    int n, k, solved = 0, need_time = 0;
    scanf("%d %d", &n, &k);

    int total_time = 240 - k; // updated

    for (int i = 1; i <= n; i++)
    {
        need_time = need_time + i * 5;

        if (need_time <= total_time)
        {
            solved++;
        }

        else
        {
            break;
        }
    }
    printf("%d\n", solved);

    return 0;
}