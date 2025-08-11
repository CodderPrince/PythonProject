#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[]={1,2,3,4,5};
    int i,sum=0;
    for(i=0; i<5; i++)
    {
        //printf("%u\n",&arr[i]);
        sum = sum + *(arr+i);
        //0+0=0 index value is now assigned to sum variable


    }
    printf("Sum of the array: %d\n",sum);
}