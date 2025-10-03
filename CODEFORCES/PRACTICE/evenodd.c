//Mahmoud and Ehab and the even-odd game
#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%2==0  && n>=2)
    {
        printf("Mahmoud\n");
    }
    else
    {
        printf("Ehab\n");
    }

    return 0;
}