//digits_summation.c
//prince

#include <stdio.h>

int main() 
{
    long long N, M;
    scanf("%lld %lld", &N, &M);

   
    int lastDigitN = N % 10;
    int lastDigitM = M % 10;
    int sum = lastDigitN + lastDigitM;

    printf("%d\n", sum);

    return 0;
}
