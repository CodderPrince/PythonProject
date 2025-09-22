//brains_photos.c

#include<stdio.h>
#include<string.h>

int main()
{
    int row, col;
   
    scanf("%d %d",&row,&col);
    int i,j;
    char str[row][col];
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf(" %c",&str[i][j]);
        }
    }

    int color=0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(str[i][j]=='C' || str[i][j]=='M' || str[i][j]=='Y')
            {
                color=1;
                break;
            }
        }
       /* if(color)
        {
            break;
        }
       */ 
    }
    if(color)
    {
        printf("#Color");
    }
    else
    {
        printf("#Black&White\n");
    }

    return 0;
}