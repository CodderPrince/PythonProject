//binary search
#include<stdio.h>

int main()
{
    int arr[] = {5,6,7,8,9,10,11};
    int finditem = 6;
    int left = 0, right = 7, middle = 0;
    while(left<=right)
    {
        middle = (left+right)/2;
        if(arr[middle] == finditem)
        {
            printf("Item found at index: %d\n", middle);
            return 0;
        }
        else if(arr[middle] <= finditem)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item is not found!\n");

    return 0;

}