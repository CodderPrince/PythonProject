#include <stdio.h>
int main()
{
    int I,J;
    for(I=1;I<=9;I=I+2)
    {
        for(J=7;J>=5;J--)
            printf ("I=%d J=%d\n",I,J);
    }//nested loop e 1st outer loop er kaj hoi i jokhon 1 tokhon j 7 to 5 print hobe tarpor i+2 hobe
    return 0;
}