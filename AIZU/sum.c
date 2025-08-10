#include<stdio.h>
int main()
{
    long long int t,a,sum=0, min=0, max=0;
    scanf("%lld",&t);
    for(int i=0 ; i<t; i++)
    {
        scanf("%lld",&a);
        if(i ==0)
        {
            min=a;
            max=a;
          
        }
    }
        if(a<min)
        {
            min=a;
        }
        if(max>a)
        {
            max=a;
        }
         sum= sum+a;
    printf("%lld %lld %lld\n",min,max,sum);
}