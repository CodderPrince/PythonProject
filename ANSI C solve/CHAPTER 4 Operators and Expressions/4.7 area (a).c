#include<stdio.h>
#define PI 3.1416
int main()
{
double r,h,area;
printf("Enter the value of r & h: ");
scanf("%lf%lf",&r,&h);
area= PI*r*r+2*PI*r*h;
printf("Area is: %.2lf",area);
return 0;
}
