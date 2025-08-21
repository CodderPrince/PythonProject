#include<stdio.h>
#include<math.h>
int main()
{

    double a,b,c,S,A;
    printf("Enter the value of a,b &c:\n\t");
    scanf("%lf%lf%lf", &a,&b,&c);
    S= (a+b+c)/2.0;
    A= sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area of the triangle is: %.3lf", A);

    return 0;
}
