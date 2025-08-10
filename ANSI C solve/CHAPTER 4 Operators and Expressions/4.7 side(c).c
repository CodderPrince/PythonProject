#include<stdio.h>
#define cosx
int main()
{
int a,b,x,Side;
printf("Enter the value of a,b,x: ");
scanf("%d%d%d",&a,&b,&x);
Side= sqrt((a*a+b*b)-(2*a*b*cos(x)));
printf("Side is:%d\n",Side);

return 0;
}
