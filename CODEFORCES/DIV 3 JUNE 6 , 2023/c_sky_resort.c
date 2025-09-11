/*
Name: Md. An Nahian Prince
University: BRUR
*/

#include <stdio.h>

int countVacationDays(int n, int k, int q, int temperatures[]) 
{
    int ways = 0;
    int consecutiveDays = 0;

    for (int i = 0; i < n; i++) 
    {
        if (temperatures[i] <= q) 
        {
            consecutiveDays++;
        } 
        else 
        {
            consecutiveDays = 0;
        }

        if (consecutiveDays >= k) 
        {
            ways += (consecutiveDays - k + 1);
        }
    }

    return ways;
}

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n, k, q;
        scanf("%d %d %d", &n, &k, &q);

        int temperatures[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &temperatures[i]);
        }

        int ways = countVacationDays(n, k, q, temperatures);
        printf("%d\n", ways);
    }

    return 0;
}
