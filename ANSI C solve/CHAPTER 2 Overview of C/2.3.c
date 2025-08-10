#include<stdio.h>
int main()
{
double a=250,b=85,c=25,d,x;
d= b-c;
x=a/d;
if(d!=0)
{
    printf("x=%.3lf", x);
}
else{
    printf("Error!",x);
}
return 0;
}
