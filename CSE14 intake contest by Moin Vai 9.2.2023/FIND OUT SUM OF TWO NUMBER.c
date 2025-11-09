#include<stdio.h>
int main()
{
    int a,b,c,i,t;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d%d%d",&a,&b,&c);
        if(a==b+c)
        {
            printf("YES\n");
        }
        else if(b==a+c)
        {
            printf("YES\n");
        }
        else if (c==a+b)
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
