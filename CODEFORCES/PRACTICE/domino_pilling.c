// /domino_pilling.c
#include<stdio.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mul = m*n, count=0;
    while(mul>=2)
    {
        mul = mul-2;
        count++;
    }
    printf("%d\n",count);

    return 0;
}