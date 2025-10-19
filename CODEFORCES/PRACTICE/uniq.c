#include <stdio.h>

#define MAX_SIZE 100

int countUniqueElements(int arr[], int n)
{
    int frequency[MAX_SIZE] = {0}; // Array to store frequency of elements

    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    int uniqueCount = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        if (frequency[i] == 1)
        {
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main()
{
    int n = 5;

    // printf("Enter the size of the array: ");
    // scanf("%d", &n);

    int arr[MAX_SIZE] = {1, 1, 2, 2, 3};

    // printf("Enter the elements of the array: ");
    // for (int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }

    int uniqueCount = countUniqueElements(arr, n);
    printf("%d\n", uniqueCount);

    return 0;
}
