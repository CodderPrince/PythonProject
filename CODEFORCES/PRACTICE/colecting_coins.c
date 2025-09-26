//colecting_coins.c
//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,n,sum=0;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&n);
        sum = a+b+c+n;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}