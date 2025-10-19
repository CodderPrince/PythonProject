//triple.c
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],count[200001]={0};
        int i,c = -1,e;
        for(i=0; i<n; i++)
        {
            scanf("%d",&e);
            count[e]++;
            if(count[e]>=3)
            {
                c = e;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
