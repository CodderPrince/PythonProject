//mishka_and_game.c
//prince

#include<stdio.h>

int main()
{
    int n,m,c, mis=0, chr=0;
    scanf("%d",&n);
    int i;
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&m,&c);
        if(m<c)
        {
            chr++;
        }
        else if(m>c)
        {
            mis++;
        }
    }
    if(mis>chr)
    {
        printf("Mishka\n");
    }
    else if(chr>mis)
    {
        printf("Chris\n");
    }
    else 
    {
        printf("Friendship is magic!^^\n");
    }

    return 0;
}