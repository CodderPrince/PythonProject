#include<stdio.h>
int main()
{
    int X, Y, i;
    scanf("%d%d", &X,&Y);
    if (X > Y)
     {
        int total = 0;
        for (i = Y; i <= X; i++)
         {
            if (i % 13 != 0) 
            {
                total = total+i;
            }
        }
        printf("%d\n", total);
    }
    else if(X < Y)
    {
        int total2 = 0;
        for (i = X; i <= Y; i++)
        {
            if (i % 13 != 0) 
            {
                total2 = total2+i;
            }
        }

        printf("%d\n", total2);
    }
   return 0;
}