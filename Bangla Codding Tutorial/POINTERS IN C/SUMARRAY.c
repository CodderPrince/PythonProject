// simple sum
/*
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[]={1,2,4,5};
    int *ptr,sum=0,i;
    for(i=0; i<4; i++)
    {
        sum = sum + *(arr+i);
    }
    printf("Sum = %d\n",sum);
}
*/

// recursion sum
/*
#include <stdio.h>
#include <stdlib.h>

int sum(int *ptr, int size)
{
    int i, res = 0;
    for (i = 0; i < size; i++)
    {
        res = res + *(ptr + i);
    }
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int size;
    int result = sum(arr, 4);
    printf("Sum = %d\n", result);
}
*/

// recursion swap two number using pointer

#include <stdio.h>
#include <stdlib.h>

int swap(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("\nAfter swapping\n");
    printf("x = %d, y = %d\n\n", *ptr1, *ptr2);
}
int main()
{
    int x = 5, y = 10;
    printf("\nBefore swapping:\nx = %d, y = %d\n", x, y);
    int res = swap(&x, &y);
}