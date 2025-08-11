#include <stdio.h>
int main() 
{
    double f1, f2;
    scanf("%lf %lf", &f1, &f2);
    double result = (f1 + 100.0) * (f2 + 100.0) / 100.0 - 100.0;
    //this is formula to find out average gdp between two years
    printf("%.6lf\n", result);
    return 0;
}
