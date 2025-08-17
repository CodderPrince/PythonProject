#include <stdio.h>
int main()
{
    int I,J;
    for(I=1;I<=9;I=I+2)
    {
        for(J=6+I;J>3+I;J--)
        {//ekhane ekta sequence aunujayi increase hosse
            printf ("I=%d J=%d\n",I,J);
        }/*i =1 hole j7 theke start hobe sequence kheyal rakhlei hobe*/
    }
    return 0;
}