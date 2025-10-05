//A. In Search of an Easy Problem
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i, arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int zero=0, one=0;
    for(i=0; i<n; i++)
    {
        if(arr[i] == 0 )
        {
            zero++;            
        }
        else if(arr[i] == 1)
        {
            one++;
        }
    }

    if(one>=1)
    {
        printf("HARD\n");
    }

    else
    {
        printf("EASY\n");
    }

    return 0;
}