#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int x, y;
        scanf("%d %d", &x, &y);

        bool canEscape = true;

        for (int i = 0; i < k; i++) 
        {
            int xi, yi;
            scanf("%d %d", &xi, &yi);

            int dx = xi - x;
            int dy = yi - y;

            if ((abs(dx) == 1 && abs(dy) == 1) || ((dx)==2 && (dy)==2))
            {
                canEscape = false;
                break;
            
            }
        }
        if (canEscape) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
