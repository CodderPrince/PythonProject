//modular_expotentation.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    long long int n, m;
    scanf("%lld %lld",&n,&m);
    int result=0;
    int x = pow(2,n);
    result = m % x;
    printf("%d\n",result);

    return 0;
}