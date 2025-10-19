//vasya_the_hipster.c
#include<stdio.h>

int main()
{
    int a,b,same_shock=0, differ_shocks=0;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        differ_shocks = b;
        same_shock = (a-b)/2;
    }
    else
    {
        differ_shocks = a;
        same_shock = (b-a)/2;
    }

    printf("%d %d",differ_shocks,same_shock);

    return 0;
}