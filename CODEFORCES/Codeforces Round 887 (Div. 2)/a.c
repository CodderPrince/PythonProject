/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR
 *            Codeforces Round 887 (Div. 2)            *
 *            PB: A. Desorting                         *
 ******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
        int ans = 0;
        for (int i = 1; i < n; i++) 
        {
            if (a[i] <= a[i - 1]) {
                int tmp = a[i];
                while (i > 0 && a[i - 1] >= tmp) 
                {
                    a[i] = a[i - 1];
                    i--;
                    ans++;
                }
                a[i] = tmp;
            }
        }

        printf("%d\n", ans);
    }
    return 0;
}
