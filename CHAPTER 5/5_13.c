#include<stdio.h>
int main()
    {
        int i,count=0,sum=0;
        for(i=0; i<=100; i++)
        {
            if(i%6==0 && i%4!=0)
            {
                sum= sum+i;
                count++;
                printf("%d ",i);

            }
        }
        printf("\n");
        printf ("Count = %d\n",count);
        printf("Summation = %d\n",sum);
    }
