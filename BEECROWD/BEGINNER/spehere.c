#include<stdio.h>
int main()
{
    double a,res,pi=3.14159;
    scanf("%lf",&a);
    res= (4/3.0)*pi*a*a*a;
    printf("VOLUME = %.3lf\n",res);
}