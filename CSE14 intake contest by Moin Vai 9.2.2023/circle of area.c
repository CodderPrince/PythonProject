
#include <stdio.h>
#include<math.h>
int main(){
    int a,r;
float pi= 2* acos(0.0);
double Area1=0, Area2=0, Area3=0;
printf("Enter the value of square arm: \n");
scanf("%d",&a);
Area1= a*a;
//Area1 of square
printf("Enter the radius of circle: \n");
scanf("%d",&r);
Area2= pi*r*r;
//Area2 of circle
Area3= Area1-Area2;
printf("Area of shaded area: %lf",Area3);
return 0;
}
