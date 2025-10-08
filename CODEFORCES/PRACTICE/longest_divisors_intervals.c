//longest_divisors_intervals.c
//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        int i,count=0;
        for(i=1; i<=50; i++)
        {
            if(n % i == 0)
            {
                count++;
            }
            else 
            {
                break;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}