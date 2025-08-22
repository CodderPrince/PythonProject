#include<stdio.h>
int main()
{
double s,u,t,a;
printf("Enter the initial velocity, acceleration & time:\n");
scanf("%lf%lf%lf",&u,&a,&t);
s= u*t + 1.0/2.0*a*t*t;
printf("Distance travelled by a car is= %.2lf", s);


return 0;
}
