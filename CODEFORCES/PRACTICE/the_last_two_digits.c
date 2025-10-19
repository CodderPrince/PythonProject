//the_last_two_digits.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    long long a,b,c,d,sum=0, x;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    sum = ((a%100)*(b%100)*(c%100)*(d%100))%100;
   
    printf("%02lld\n",sum);

    return 0;
}