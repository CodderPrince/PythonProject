#include<stdio.h>
int main()
{
    double list[100],k;
    for(int i=0; i<100; i++)
    {
        scanf("%lf", &k);
        list[i]=k;
    }
    for(int i=0; i<100; i++)
    {
        if(list[i]<=10)
        {
            printf("A[%d] = %.2lf\n",i,list[i]);
        }
    }
}