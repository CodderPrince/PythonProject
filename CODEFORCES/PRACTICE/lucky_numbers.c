//lucky_numbers.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,x;
    scanf("%lld",&n);
    x = pow(2,n+1)-2;

    printf("%lld\n",x);

    return 0;
}