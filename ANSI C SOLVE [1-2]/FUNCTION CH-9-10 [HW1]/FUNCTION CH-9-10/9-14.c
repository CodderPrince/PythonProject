// old 9.14 and new 10.14
// read two unsorted array, sort them and merge two array

#include <stdio.h>

int sort1(int n1, int arr1[]);
int sort2(int n2, int arr2[]);
int mergedArray(int n1, int arr1[], int n2, int arr2[], int merge[]);

int main()
{
    int n1;
    printf("Enter the first array size: ");
    scanf("%d", &n1);
    int arr1[n1], i;
    printf("Enter the first array elements: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int n2;
    printf("Enter the second array size: ");
    scanf("%d", &n2);
    int arr2[n2], j;
    printf("Enter the second array elements: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merge[n1 + n2];

    sort1(n1, arr1);
    sort2(n2, arr2);
    mergedArray(n1, arr1, n2, arr2, merge);
    printf("Sorted array in ascending order: ");
    for (i = 0; i < (n1 + n2); i++)
    {
        printf("%d ", merge[i]);
    }
    printf("\n");

    return 0;
}

int sort1(int n1, int arr1[])
{
    int i, j, temp;
    for (i = 0; i < n1 - 1; i++)
    {
        for (j = 0; j < n1 - i - 1; j++)
        {
            {
                if (arr1[j + 1] < arr1[j])
                {
                    temp = arr1[j];
                    arr1[j] = arr1[j + 1];
                    arr1[j + 1] = temp;
                }
            }
        }
    }
}
int sort2(int n2, int arr2[])
{
    int i, j, temp;
    for (i = 0; i < n2 - 1; i++)
    {
        for (j = 0; j < n2 - i - 1; j++)
        {
            {
                if (arr2[j + 1] < arr2[j])
                {
                    temp = arr2[j];
                    arr2[j] = arr2[j + 1];
                    arr2[j + 1] = temp;
                }
            }
        }
    }
}
int mergedArray(int n1, int arr1[], int n2, int arr2[], int merge[])
{
    int i, j, k;
    for (i = 0, j = 0, k = 0; i < n1 && j < n2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            merge[k] = arr1[i];
            i++;
        }
        else
        {
            merge[k] = arr2[j];
            j++;
        }
    }
    while (i < n1)
    {
        merge[k] = arr1[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        merge[k] = arr2[j];
        k++;
        j++;
    }
}
