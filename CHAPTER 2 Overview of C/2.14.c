#include<stdio.h>
#include<math.h>
int main()
{
double x1=0,x2=4,y1=0,y2=5,pi=3.1416,r,A;
r= sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
A= pi*r*r;
printf("Area of the circle: \t%.2lf\n", A);
return 0;
}
