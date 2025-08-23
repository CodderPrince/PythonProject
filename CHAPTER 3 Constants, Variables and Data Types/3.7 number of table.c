#include<stdio.h>
#include<math.h>
int main()
{
int num, i, tab;
printf("Enter the number: ");
scanf("%d",&num);
printf("Table of %d is:\n",num);
for(i=1; i<=15; i++)
{
tab= num*i;
printf("%d*%d=%d\n",num,i,tab);
}

return 0;
}
