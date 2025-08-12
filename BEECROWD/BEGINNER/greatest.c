#include<stdio.h>
int main()
{
    int a,b,c,large=0;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        large=a;
    }
     else if(b>a && b>c)
    {
        large=b;
    }
    else if(c>a && c>b)
    {
        large=c;
    }
    printf("%d eh o maior\n",large);
    return 0;
}