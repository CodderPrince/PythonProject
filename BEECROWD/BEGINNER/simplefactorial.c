#include<stdio.h>
int main()
{
    int n;
        scanf("%d",&n);
        long long int fact=1, i;
        for(i=1; i<=n; i++)
        {
            fact= fact*i;
        }
        printf("%lld\n",fact);
    return 0;
}
