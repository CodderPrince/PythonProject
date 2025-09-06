// prince
// sum of three

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define PI 3.1416

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, x, y, z;
        scanf("%d", &n);
        if (n < 7 || n == 9)
        {
            printf("NO\n");
        }
        else
        {
            if ((n - 5) % 3 == 0)
            {
                printf("YES\n1 2 %d\n", n - 3);
            }
            else
            {
                printf("YES\n1 4 %d\n", n - 5);
            }
        }
    }

    return 0;
}