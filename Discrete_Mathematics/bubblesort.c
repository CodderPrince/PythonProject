//bubble sort algorithm
#include<stdio.h>

int main()
{
    int arr[] = {3,2,5,1,8};
    int i,j,n=5,swap=0;
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-1-i); j++)
        {
            if(arr[j]>arr[j+1])//3>2
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0)
        {
            break;
        }
    }

    printf("\nAfter Sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}