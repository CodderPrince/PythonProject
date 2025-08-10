#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    double z;
    x= a/b;
    y= a%b;
    z= (double)a/b;//casting kore dilam karon duita int er vagfol int hoi
    printf("%d %d %.5lf\n",x,y,z);
}