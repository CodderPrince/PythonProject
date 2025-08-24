#include<stdio.h>
int main()
{
    int x;
    int sum=0;
    for (int i=101; i<200; i++)
     {
        x= i%7;
        if(x==0)
        {
            printf("%d\n",i);
            sum= sum+i;
        }
     }
     printf("Sum: %d\n",sum);
       return 0;
    }
