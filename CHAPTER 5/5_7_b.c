#include<stdio.h>
int main()
{
    int row;
    printf("Enter row number: ");
    scanf("%d",&row);
    for(int i=1; i<=row; i++)
    {
        for(int j=2; j<=i+1; j++)
        {
            printf("%d",(i+j)%2);
            printf(" ");
        }
        printf("\n");
    }
}