//MexanizedArray.c
//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,x,sum=0;
        scanf("%lld %lld %lld",&n,&k,&x);
        if(n<k || k-1>x)
        {
            sum = -1;
        }
        else
        {
            if(x==k)
            {
                sum = ((k-1)*k)/2;
                sum = sum + ((n-k)*(x-1));
            }
            else
            {
                sum = ((k-1)*k)/2;
                sum = sum + ((n-k)*x);
            }
        }
        printf("%lld\n",sum);
    }

    return 0;
}