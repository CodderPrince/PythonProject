//insertion sort

#include<stdio.h>
int main()
{
    int a[] = {6,5,3,2,7};
    int i,value,index;
    for(i=1; i<5; i++)
    {
        value = a[i];
        index = i;
        while(index>0 && value<a[index-1])
        {
            a[index] = a[index-1];
            index--;
        }
        a[index] = value;
    }
    printf("\nAfter sorted\n");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");

    return 0;
}