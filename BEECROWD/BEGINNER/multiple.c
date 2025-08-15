#include<stdio.h>
int main()
{
    int A, B;
    scanf("%d %d", &A, &B);
    if (B % A == 0 || A % B == 0)
    {//ekhane 2 ta input eke oporer gunitok kina jachai korte bolese ejonno vagfol ber korte hobe
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}