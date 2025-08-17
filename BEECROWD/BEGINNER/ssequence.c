#include<stdio.h>
int main()
{
    double number,sum=0,x;
    for(int i=1; i<=100; i++)
    {
        x= 1.0/i;
        sum = sum+x;
    }
    printf("%.2lf\n",sum);
}