#include<stdio.h>
#include<math.h>
int main(){
double x1,y1,x2,y2,D;
printf("Enter the value of four variables:\n\t");
scanf("%lf%lf%lf%lf", &x1,&y1,&x2,&y2);
D=sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
printf("\tD= %.2lf",D);

return 0;
}
