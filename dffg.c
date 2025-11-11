#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}
int fact(n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*(fact(n-1));
    }
}
