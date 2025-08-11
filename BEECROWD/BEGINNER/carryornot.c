#include<stdio.h>
int main()
{
    int unsigned long a,b;
    while(scanf("%lu %lu",&a, &b)!=EOF)
    {
        printf("%lu\n",a^b);//a caret b.. ei symbol ke caret bole ja xor gate hisab kore
    }//a xor b question e je logic gate ta deya ase seta solve kore tar value ta print korte hobe
    return 0;
}