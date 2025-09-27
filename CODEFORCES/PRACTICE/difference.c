//difference.c
//prince

#include<stdio.h>

int main()
{
    long long int a,b,c,d,x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    x = (a*b)-(c*d);
    printf("Difference = %lld\n",x);

    return 0;
}