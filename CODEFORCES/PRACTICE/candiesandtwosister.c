//Candies and Two sisters
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        int count=0;
        if(n%2 == 0)
        {
            printf("%d\n",n/2-1);
        }
        else
        {
            printf("%d\n",n/2);
        }
    }

    return 0;
}