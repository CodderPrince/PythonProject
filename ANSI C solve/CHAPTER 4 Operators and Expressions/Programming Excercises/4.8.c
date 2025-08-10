#include<stdio.h>
#include<math.h>
int main()
{
float C[10] = { 0.01, 0.02, 0.03, 0.04, 0.05, 0.06, 0.07, 0.08, 0.09, 0.10 };
float R, L, f[10];
int i;
printf("Enter the value of R : ");
scanf("%f",&R);
printf("\n\nEnter the value of L : ");
scanf("%f",&L);
for(i=0; i<10; i++)
{
f[i] = sqrt(1/(L*C[i])-(R*R)/(4*C[i]*C[i]));
}
printf("\n\n\nValue of C\tValue of f\n\n");
for(i=0; i<10; i++)
{
printf("%f\t%f\n",C[i],f[i]);
}
return 0;
}
