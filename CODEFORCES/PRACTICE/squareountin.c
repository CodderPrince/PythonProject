//square counting
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c;
        scanf("%lld %lld",&a,&b);
        c = b/(a*a);
        printf("%lld\n",c);
    }

    return 0;
}