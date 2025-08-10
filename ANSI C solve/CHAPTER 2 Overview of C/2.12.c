#include<stdio.h>
#include<math.h>
int main()
{

    double x,y, Sum, Difference, Product,Division;
    printf("Enter the value of x & y:\n\n\t");
    scanf("%lf%lf", &x,&y);
    Sum=        x+y;
    Difference= x-y;
    Product=    x*y;
    Division=   x/y;
    printf("\tx=%.2lf\t\ty=%.2lf\n", x,y);
    printf("\tSum=%.2lf\tDifference=%.2lf\n",Sum, Difference);
    printf("\tProduct=%.2lf\tDivision=%.2lf\n",Product, Division);

    return 0;
}
