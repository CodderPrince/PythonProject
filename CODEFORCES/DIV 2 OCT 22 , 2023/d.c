#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int max_l = 0;
        int min_r = m + 1;
        // int max;

        for (int i = 0; i < n; i++)
        {
            int l, r;
            scanf("%d %d", &l, &r);
            if (r < min_r)
            {
                min_r = r;
            }
            if (l > max_l)
            {
                max_l = l;
            }
        }

        if (max_l <= min_r)
        {
            printf("%d\n", max(0, max_l - 1));
        }
        else
        {
            printf("0\n");
        }
    }

    return 0;
}
