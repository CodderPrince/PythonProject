/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *            PB: B. Ten Words of Wisdom              *
 ******************************************************/

#include <stdio.h>

int main() 
{
    int t; 
    scanf("%d", &t);
    while (t--) 
    {
        int n; 
        scanf("%d", &n);
        int max_quality = -1;
        int winner = -1;
        for (int i = 1; i <= n; i++) 
        {
            int words, quality;
            scanf("%d %d", &words, &quality);
            if (words <= 10 && quality > max_quality) 
            {
                max_quality = quality;
                winner = i;
            }
        }
        printf("%d\n", winner);
    }
    return 0;
}