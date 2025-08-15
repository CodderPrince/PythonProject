#include<stdio.h>
int main()
{
    int i,j=0,position,arr[101];
    for(i=0; i<100; i++)
    {//100 number input nibo
        scanf("%d",&arr[i]);
    }
    for(i=0; i<100; i++)
    {
        if(arr[i]>j)
        {
            j=arr[i];
            position = i+1;//jehetu zero index theke start hoyese
        }
    }
 printf("%d\n",j);
 printf("%d\n",position);
return 0;
}