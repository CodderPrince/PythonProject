//max_min.c
//prince

#include<stdio.h>

int main()
{
    long long int a,b,c,max,min;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(a>=b && a>=c)
    {
        max = a;
        if(b>c)
        {
            min=c;
        }
        else
        {
            min=b;
        }
    }
    else if(b>=a && b>=c)
    {
        max=b;
        if(c>a)
        {
            min=a;
        }
        else
        {
            min=c;
        }
    }
    else
    {
        max=c;
        if(a>b)
        {
            min=b;
        }
        else
        {
            min=a;
        }
    }
    printf("%lld %lld\n",min,max);

    return 0;
}