//puzzle_pieces.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if((m==1 || n==1) || (m==2 && n==2))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }   
    }

    return 0;
}