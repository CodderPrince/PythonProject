//drazil_and_date.c
//prince

#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if(c<(abs(a)+abs(b)) || (abs(a)+abs(b))%2 != c%2)
    {
        printf("NO\n");
    }
    else 
    {
        printf("YES\n");
    }

    return 0;
}