#include<stdio.h>
int main()
{
int integer,rmd;
float x;
printf("Enter the value of x: ");
scanf("%f", &x);
integer=x;
rmd = integer%100;
//modulus of 10 means print integer number right to one digit
//if we want to print integer number right to 3 digit then %1000
//ekok, dosok, sotok, hisab kore kaj korte hobe

printf("The two right-most digit of integer value is: %d",rmd);


return 0;
}
