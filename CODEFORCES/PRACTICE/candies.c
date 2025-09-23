//candies.c
//prince

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a,b,i,arr[n],sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%lld %lld",&a,&b);
    for(i=a; i<=b; i++)
    {
        sum = sum+arr[i];
    }
    printf("%lld\n",sum);

    return 0;
}