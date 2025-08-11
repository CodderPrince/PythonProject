#include <stdio.h>
int main()
{
    double X,Y;
    scanf ("%lf%lf", &X, &Y);
    if (X + Y == 0) printf("Origem\n");//eta muloto mulbindu bujaiche jodi (0,0), hoi tahole eta
    else if (X == 0) printf("Eixo Y\n");// x=0, y=n hole y axis er upor seta print korte hobe
    else if (Y == 0) printf("Eixo X\n");
    else if (X>0 && Y>0) printf("Q1\n");
    else if (X<0 && Y>0) printf("Q2\n");
    else if (X<0 && Y<0) printf("Q3\n");
    else if (X>0 && Y<0) printf("Q4\n");
    return 0;
}