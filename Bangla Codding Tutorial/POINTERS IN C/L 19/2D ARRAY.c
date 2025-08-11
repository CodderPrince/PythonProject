#include<stdio.h>
int main()
{
int a[3][3], row,col,sum=0;
printf("Enter the 9 values:\n");
for(row=0; row<3; row++)
{
for(col=0; col<3; col++)
{
scanf("%d", &a[row][col]);
}
}
for(row=0; row<3; row++)
{
for(col=0; col<3; col++)
{
printf("%d ", a[row][col]);
sum= sum+ a[row][col];
}
printf("\n");

}
float average= sum/9.0;
printf("Average is: %.3f", average);


return 0;
}
