#include<stdio.h>
int main()
{
int n,sum=0,i;
printf("Enter any value: ");
scanf("%d",&n);
while(n>0)
{
i= n%10;
sum= sum+i;
n= n/10;
}
printf("Sum of digits: %d", sum);
return 0;
}
