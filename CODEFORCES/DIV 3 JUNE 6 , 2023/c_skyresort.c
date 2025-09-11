/*
Name: Md. An Nahian Prince
University: BRUR
*/

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        int n, k, q;
        scanf("%d %d %d", &n, &k, &q);

        int ways = 0;
        int consecutive_days = 0;

        for (int i = 0; i < n; i++) 
        {
            int temp;
            scanf("%d", &temp);

            if (temp <= q) 
            {
                consecutive_days++;
            } 
            else 
            {
                consecutive_days = 0;
            }

            if (consecutive_days >= k) 
            {
                ways = ways + (consecutive_days - k + 1);   
            }
        }

        printf("%d\n", ways);
    }

    return 0;
}