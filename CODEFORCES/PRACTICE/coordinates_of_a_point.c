//coordinates_of_a_point.c
//prince

#include<stdio.h>

int main()
{
    float a,b;
    scanf("%f %f",&a,&b);

    if(a>0.0 && b>0.0)
    {
        printf("Q1\n");
    }
    else if(a<0.0 && b>0.0)
    {
        printf("Q2\n");
    }
    else if(a<0.0 && b<0.0)
    {
        printf("Q3");
    }
    else if((a>0.0 && b==0.0) || (a<0.0 && b==0.0))
    {
        printf("Eixo X\n");
    }
    else if((a==0.0 && b>0.0) || (a==0.0 && b<0.0))
    {
        printf("Eixo Y\n");
    }
    else if(a==0.0 && b==0.0)
    {
        printf("Origem\n");
    }
    else
    {
        printf("Q4");
    }

    return 0;
}
