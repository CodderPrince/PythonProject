//i_love_username
//prince

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,maxValue,minValue,max=0,min=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        maxValue=arr[0];
        minValue=arr[0];        
    }
    for(i=1; i<n; i++)
    {
        if(arr[i]>maxValue)
        {
            maxValue=arr[i];
            max++;
        }
        if(arr[i]<minValue)
        {
            minValue=arr[i];
            min++;
        }
    }
    printf("%d\n",max+min);

    return 0;
}