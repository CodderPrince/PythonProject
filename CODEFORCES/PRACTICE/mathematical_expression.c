//mathematical_expression.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    long long a,b,c,sum=0,sub=0,mul=0;
    char ch,s;
    scanf("%lld %c %lld %c %lld",&a,&ch,&b,&s,&c);
    if(ch=='+')
    {
        if((a+b) == c)
        {
            printf("Yes\n");
        }
        else
        {
            sum = a+b;
            printf("%lld\n",sum);
        }
    }
    if(ch=='-')
    {
        if((a-b)==c)
        {
            printf("Yes\n");
        }
        else
        {
            sub = a-b;
            printf("%lld\n",sub);
        }
    }
    if(ch=='*')
    {
        if((a*b)==c)
        {
            printf("Yes\n");
        }
        else
        {
            mul = a*b;
            printf("%lld\n",mul);
        }
    }

    return 0;
}