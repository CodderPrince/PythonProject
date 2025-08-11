#include<stdio.h>
float add(float x, float y)
{
return x+y;
}
float subtract(float x, float y)
{
return x-y;
}
float multiplication(float x, float y)
{
return x*y;
}
float divide(float x, float y)
{
return x/y;
}
int main(){
float x,y;
printf("Enter the value of x and y:\n");

scanf("%f%f",&x,&y);
float add_result= add(x,y);
float subtract_result= subtract(x,y);
float multiplication_result= multiplication(x,y);
float divide_result= divide(x,y);
printf("Add: %f\nSubstract: %f\nMultiplication: %f\nDivide: %f\n", add_result,subtract_result, multiplication_result,divide_result);
return 0;
}
