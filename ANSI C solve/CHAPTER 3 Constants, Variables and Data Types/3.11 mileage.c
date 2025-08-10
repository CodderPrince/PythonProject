#include<stdio.h>
int main(){
int x;
float y;
printf("Input total distance in km: ");
scanf("%d",&x);
printf("Input total fuel consumed in liters: ");
scanf("%f",&y);
printf("Average mileage of the car (km/lt): %.3f",x/y);

return 0;
}
