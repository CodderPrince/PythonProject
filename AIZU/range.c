#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a<b && b<c)//three condition ekbare deya jai na
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}