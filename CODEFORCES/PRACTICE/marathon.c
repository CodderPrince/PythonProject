//marathon.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n=4;
        //scanf("%d",&n);
        int arr[10001];
        int i;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        int count=0;
        for(i=1; i<n; i++)
        {
            if(arr[0] < arr[i])
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}