#include<stdio.h>
int main()
{
   float n,p,i,sum=0;
   printf("Enter the value of n: ");
   scanf("%f",&n);
   for(i=1; i<=n; i++)
   {
       p=1/i;
       sum=sum+p;
   }
   printf("%.3f",sum);

    return 0;
}
