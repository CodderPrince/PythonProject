/*
Author: PRINCE
VARSITY: BRUR
DEPARTMENT: CSE
*/

#include <stdio.h>

int main() 
{
    int t;
    scanf("%d", &t); 
    
    while (t--) 
    {
        int a, b, c;//
        scanf("%d %d %d", &a, &b, &c); 
        if(c % 2 == 0)
        {
            if(a>b)
            {
                printf("First\n");
            }
            else
            {
                printf("Second\n");
            }
        }
        else
        {
            if(b>a)
            {
                printf("Second\n");
            }
            else
            {
                printf("First\n");
            }
        }
    }

    return 0;
}
