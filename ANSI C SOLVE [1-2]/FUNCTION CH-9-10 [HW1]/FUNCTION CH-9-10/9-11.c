// old 9.11 new 10.11
// input [m][n] matrix and find the largest value

#include <stdio.h>

int largest(int m, int n, int matrix[m][n]);

int main()
{
    int m, n;
    printf("Enter the row size: ");
    scanf("%d", &m);
    printf("Enter the coloumn size: ");
    scanf("%d", &n);
    int matrix[m][n], i, j, max;
    printf("Enter the matrix element\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    max = largest(m, n, matrix);
    printf("Largest value of the matrix is: %d\n", max);

    return 0;
}

int largest(int m, int n, int matrix[m][n])
{
    int max = matrix[0][0];
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (max < matrix[i][j])
            {
                max = matrix[i][j];
            }
        }
    }

    return max;
}