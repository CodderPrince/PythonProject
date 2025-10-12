//police_recruits.c
//prince

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,count=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int police=0,crime=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]>0)
        {
            police = police+arr[i];//extra manpower
        }
        else
        {
            if(police<1)
            {
                ++crime;
            }
            else
            {
                --police;
            }
        }
    }
    
    printf("%d\n",crime);

    return 0;
}