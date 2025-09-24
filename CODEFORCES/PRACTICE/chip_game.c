//chip_game.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if((n%2 == 0 && m%2 == 0) || (n%2 !=0 && m%2 !=0))
        {
            printf("Tonya\n");
        }
        else
        {
            printf("Burenka\n");
        }
    }

    return 0;
}