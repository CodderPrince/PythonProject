#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter any two integer to see modulus x & y: ");
    scanf("%d %d",&x,&y);
    double modulus=0;
    modulus = x%y;
    printf("%lf\n",modulus);
}