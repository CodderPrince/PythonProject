    #include<stdio.h>
    int main()
    {
       int row, col;
       for(row=5; row>=1; row--)
       {
           for(col=1; col<=row; col++)
           {
               printf("%d",col);
           }
           printf("\n");
       }
return 0;
    }
