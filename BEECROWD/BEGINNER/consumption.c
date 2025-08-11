#include<stdio.h>
int main()
{
    int distance;
    double fuel, res;
    scanf("%d %lf",&distance,&fuel);
    res= distance/fuel;
    printf("%.3lf km/l\n",res);
    return 0;
}