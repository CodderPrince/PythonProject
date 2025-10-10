//multiples
//prince

#include<stdio.h>

int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    if(a%b==0 || b%a==0)
    {
        printf("Multiples\n");
    }
    else
    {
        printf("No Multiples\n");
    }

    return 0;
}