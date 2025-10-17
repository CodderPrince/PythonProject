#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b==c)
        {
            printf("YES\n");
        }
        else if(a+c==b)
        {
            printf("YES\n");
        }
        else if(b+c==a)
        {
            printf("YES\n");
        }

        else 
        {
            printf("NO\n");
        }
    }

    return 0;
}
