#include<stdio.h>
int main()
{
    int x,y;
    short int z;
    printf("Enter the 6 digit number of x & y:\n ");
    scanf("%d%d", &x, &y);
    z= x+y;
    printf("x=%d\ny=%d\nz=%d\n", x,y,z);
    return 0;
}
