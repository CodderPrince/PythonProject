#include<stdio.h>
int main()
{
    int row, count=0;
    printf("Enter row number: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=i; j++)
        {
            count++;
            printf("%d",count);
            printf(" ");
        }
        printf("\n");
    }
}