//new_year_meeting_friends.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int arr[3],i,j,temp;
    for(i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<2; i++)
    {
        for(j=i+1; j<3; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d\n",arr[2]-arr[0]);
    
    return 0;
}