#include<stdio.h>

int main()
{
    int array[]={3,4,5,6,8,9,11};
   
    int left=0, right=7, middle=0;
    int find_item = 9;
   
    while(left<=right)
    {
        middle= (left+right)/2;
        
        if(array[middle]==find_item)
        {
            printf("Array found at index: %d\n",middle);
            return 0;
        }
        else if(array[middle]<find_item)
        {
            left= middle + 1;
        }
        else
        {
            right= middle-1;
        }
    }
    printf("Item not found above index\n");

    return 0;
}
