//sort_numbers.c
//prince

#include<stdio.h>

int main()
{
    int a,b,c,i,min,mid,max;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max=a;
        if(b>c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
    }
    else if(b>=c && b>=a)
    {
        max=b;
        if(c>a)
        {
            min=a;
            mid=c;
        }
        else
        {
            min=c;
            mid=a;
        }
    }
    else
    {
        max=c;
        if(a>b)
        {
            mid=a;
            min=b;
        }
        else
        {
            mid=b;
            min=a;
        }
    }
    printf("%d\n%d\n%d\n\n",min,mid,max);
    printf("%d\n%d\n%d\n",a,b,c);

    return 0;
}