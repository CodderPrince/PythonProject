#include<stdio.h>
int main(){
int x,y,z;
printf("Enter the three number:\n");
scanf("%d%d%d",&x,&y,&z);
if ((x>y && x<z) || (x<y && x>z))
{
    printf("Middle number: %d",x);
}
else if ((y>x && y<z) || (y<x && y>z))
{
    printf("Middle number: %d",y);
}
else
    printf("Middle number: %d",z);
return 0;
}
