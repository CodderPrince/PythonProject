//soldier and bananas
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int price, money, want;
    scanf("%d %d %d",&price,&money,&want);
    int i,borrow= money;
    for(i=1; i<=want; i++)
    {
        int x = price *i;
        borrow = borrow - x;
    }
    if(borrow < 0)
    {
        borrow = abs(borrow);
        printf("%d\n", borrow);
    }
    else
    {
        printf("0\n");
    }
}