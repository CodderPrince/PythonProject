#include<stdio.h>
#define G 9.8
int main()
{
double m,h,v,Energy;
printf("Enter the value of m,h,v: ");
scanf("%lf%lf%lf",&m,&h,&v);
Energy= m*((G*h)+((v*v)/2));
printf("Energy is: %.3lf",Energy);
return 0;
}
