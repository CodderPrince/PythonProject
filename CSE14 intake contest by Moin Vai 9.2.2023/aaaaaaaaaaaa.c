#include<stdio.h>
#include<math.h>
int main(){
float r,a1=0,a2=0,a3=0;
float pi= 2*acos(0.0);
int i,t;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
scanf("%f",&r);
float x= 2*r;

a1=x*x;
a2= pi*r*r;
a3= a1-a2;
printf("Case %d: %.2f\n",i,a3);
}

return 0;
}
