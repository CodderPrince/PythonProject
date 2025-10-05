//interval.c
//prince

#include<stdio.h>

int main()
{
    float n;
    scanf("%f",&n);
    if(n>=0.0 && n<=25.0)
    {
        printf("Interval [0,25]\n");
    }
    else if(n>25.0 && n<=50.0)
    {
        printf("Interval (25,50]\n");
    }
    else if(n>50.0 && n<=75.0)
    {
        printf("Interval (50,75]\n");
    }
    else if(n>75.0 && n<=100.0)
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }

    return 0;
}