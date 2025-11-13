#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int sum = n*(n+1)/2;
        int array[n];
        int i;
        for(i=1; i<n; i++)
        {
            scanf("%d",&array[i]);
            sum = sum - array[i];
        }
        printf("%d\n",sum);
    }

    return 0;
}
