//beautifulmatrix.c
#include<stdio.h>
#include<stdlib.h>
#define ROW 5
#define COL 5

int main()
{
    int arr[ROW][COL];
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int move_i, move_j, total_move;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
            {
                move_i = abs(i-2);
                move_j = abs(j-2);
                total_move = move_i + move_j;
            }
        }
    }

    printf("%d\n",total_move);

    return 0;
}