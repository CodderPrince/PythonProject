/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *            PB: C. Word on the Paper                *
 ******************************************************/


#include <stdio.h>

int main() 
{
    int t; 
    scanf("%d", &t);
    while (t--) 
    {
        char grid[8][8];
        for (int i = 0; i < 8; i++) 
        {
            scanf("%s", grid[i]);
        }
        for (int j = 0; j < 8; j++) 
        {
            int found_letter = 0;
            for (int i = 0; i < 8; i++) 
            {
                if (grid[i][j] != '.') 
                {
                    putchar(grid[i][j]);
                    found_letter = 1;
                }
            }
            if (found_letter) 
            {
                putchar('\n');
                break;
            }
        }
    }
    return 0;
}