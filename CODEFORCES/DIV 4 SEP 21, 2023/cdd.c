/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>

int main() 
{
    int T;
    scanf("%d", &T);

    while (T--) 
        {
        int p = 0;
        char array[10][10];

        for (int i = 0; i < 10; i++) 
        {
            scanf("%s", array[i]);
        }

        for (int i = 0; i < 10; i++) 
        {
            for (int j = 0; j < 10; j++) 
            {
                if (array[i][j] == 'X') 
                {
                    if (i == 0 || i == 9 || j == 0 || j == 9) 
                    {
                        p += 1;
                    } 
                    else if (i == 1 || i == 8 || j == 1 || j == 8) 
                    {
                        p += 2;
                    } 
                    else if (i == 2 || i == 7 || j == 2 || j == 7) 
                    {
                        p += 3;
                    } 
                    else if (i == 3 || i == 6 || j == 3 || j == 6) 
                    {
                        p += 4;
                    } 
                    else 
                    {
                        p += 5;
                    }
                }
            }
        }

        printf("%d\n", p);
    }

    return 0;
}
