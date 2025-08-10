#include<stdio.h>
int main()
{
double a=300,b=70,c=70,d,x;
d= b-c;
x=a/d;
if(d!=0)
{
    printf("x=%.3lf", x);
}
else{
    printf("Error!");
}
return 0;
}
