//array_with_odd_sum.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n], i, sum =0, odd=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i] % 2 == 1)
            {
                odd++;
            }
        }
        if(odd % 2 == 0 && odd % n == 0)
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