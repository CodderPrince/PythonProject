#include<stdio.h>
#include<math.h>

int largeValue(int matrix[10][10], int m, int n)
{
    int large,i,j;
    large = matrix[0][0];
    for(i=0; i<m ; i++)
    {
        for(j=0; j<n; j++)
        {
            if(large<matrix[i][j])
            {
                large = matrix[i][j];
            }
        }
    }
    return large;
}

int main()
{
    int matrix[10][10];
    int l,m,n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    printf("Enter matrix element:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
    l = largeValue(matrix,m,n);
    printf("\nLargest Element is: %d\n",l);

return 0;
}
