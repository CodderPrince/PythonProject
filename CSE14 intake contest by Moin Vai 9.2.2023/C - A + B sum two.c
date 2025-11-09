#include<stdio.h>
int main()
{
int a,b,i,t;
int sum= 0,count=0;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
scanf("%d%d",&a,&b);
sum= count+a+b;
printf("%d\n",sum);
count=0;
}
return 0;
}
