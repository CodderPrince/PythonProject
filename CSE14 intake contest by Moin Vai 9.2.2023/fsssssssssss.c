#include<stdio.h>
int main(){
float a,a1,a2,a3;
int i,t;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
scanf("%f",&a);
float x= 2*a;
float pi= 2*acos(0.0);
a1=x*x;
a2= pi*a*a;
a3= a1-a2;
printf("Case %d: %.2f\n",i,a3);
}

return 0;
}
