//Is your horseshoe on the other hoof?
#include<stdio.h>

int main()
{
    int i, j, arr[4], count=0;
    for(i=0; i<4; i++)
    {
        scanf("%d",&arr[i]);
        for(j=0; j<i; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
                break;
            }
        }
    }
    printf("%d\n",count);
}