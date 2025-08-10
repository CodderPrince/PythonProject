//Prince
//ID: 12105007

#include <stdio.h>

int sort1(int arr1[], int n1)
{
    int i, j, temp;
    for (i = 0; i < n1 - 1; i++)
    {
        for (j = 0; j < n1 - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
}

int sort2(int arr2[], int n2)
{
    int i, j, temp;
    for (i = 0; i < n2 - 1; i++)
    {
        for (j = 0; j < n2 - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
}

int mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[])
{
    int i ,j,k = 0;

    for(i=0,j=0,k=0; i<n1 && j<n2; k++)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k] = arr1[i];
            i++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
        }
    }

    while (i < n1)
    {
        merged[k] = arr1[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        merged[k] = arr2[j];
        k++;
        j++;
    }
}

int main()
{
    int n1, n2;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter the elements of the first array in ascending order: ");
    int i;
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("First sorted array: ");
    for (i = 0; i < n1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array in ascending order: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("Second sorted array: ");
    for (i = 0; i < n2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    int merged[n1 + n2];
    sort1(arr1, n1);
    sort2(arr2, n2);
    mergeSortedArrays(arr1, n1, arr2, n2, merged);

    printf("Merged array in ascending order: ");
    for (i = 0; i < n1 + n2; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
