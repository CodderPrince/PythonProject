#include<stdio.h>
#include<math.h>
int main()
{
    double a,area=0, cm=0;
    scanf("%lf",&a);
    double pi= 3.141592653589793;
    area= pi*a*a;
    cm= 2**a;
    printf("%.6lf %.6lf\n",area,cm);
return 0;
}