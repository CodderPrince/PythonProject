#include<stdio.h>
int main()
{
int x;
printf("Enter the value of x: ");
scanf("%d", &x);

printf("%d\n",x);

printf("%d\n",x%1000);

printf("%d\n",x%100);
printf("%d\n",x%10);
return 0;
}
