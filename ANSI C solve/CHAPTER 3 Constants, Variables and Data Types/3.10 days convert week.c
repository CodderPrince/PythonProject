#include<stdio.h>
int main(){
int days, years,weeks,restdays;
printf("Enter the value of days: " );
scanf("%d",&days);
years= days/365;
days= days-(years*365);
weeks= days/7;
restdays= days-(weeks*7);
printf("Total %d years\n",years);
printf("Total %d weeks\n",weeks);
printf("Total %d restdays\n",restdays);
return 0;
}
