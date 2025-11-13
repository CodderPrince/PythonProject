// Binary insertion sort
#include <stdio.h>

int main()
{
    int a[] = {6, 3, 4, 2};
    int i, value, hole;
    for (i = 1; i < 4; i++) // consider 0 index is sorted
    {
        value = a[i]; // 3
        hole = i;     // 1
        while (hole > 0 && value < a[hole - 1])
        {
            a[hole] = a[hole - 1];
            hole--;
        }
        a[hole] = value;
    }

    for (i = 0; i < 4; i++)
    {
        printf("%d ", a[i]);
    }
}