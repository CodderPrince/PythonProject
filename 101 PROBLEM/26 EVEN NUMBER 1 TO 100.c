    #include<stdio.h>
    int main()
    {
        int row, col;
        for(row=1; row<=4; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf("*");
            }
            printf("\n");
        }
return 0;
    }
