#include<stdio.h>
int main()
{
int days,years,weeks,restdays;
printf("Enter the total days: ");
scanf("%d",&days);
years= days/365;
printf("Total %d years\n", years);
days= days-(years*365);
weeks= days/7;
printf("Total %d weeks\n",weeks);
restdays=days-(weeks*7);
printf("Total %d restdays\n",restdays);
return 0;
}
