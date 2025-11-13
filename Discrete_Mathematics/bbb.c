#include<stdio.h>

int main()
{
    int a[] = {1,3,4,5,6,8,9,11};
    int left =0, right =8, middle =0,value=56;
    while(left<=right)
    {
        middle = (left + right)/2;
        if(a[middle] == value)
        {
            printf("Item found at index: %d\n",middle);

            return 0;
        }
        else if(a[middle]<=value)
        {
            left = middle+1;
        }
        else
        {
            right = middle -1;
        }
    }
    printf("Item not found!\n");
       
}