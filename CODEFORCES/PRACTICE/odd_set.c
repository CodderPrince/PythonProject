//odd_set.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[2*n];
        int i, even=0,odd=0;
        for(i=0; i<2*n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if(even == odd)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}