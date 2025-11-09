#include<stdio.h>
int main(){
float a,a1=0,a2=0,a3=0;
int i,j,t;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
for(j=1; j<=t; j++)
{
scanf("%f",&a);
float x= 2*a;
float pi= 2*acos(0.0);
a1=x*x;
a2= pi*a*a;
a3= a1-a2;
printf("Case(%d):%.2f",j,a3);
}
printf("\n");
}
return 0;
}
