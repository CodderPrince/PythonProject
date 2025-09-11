//prince
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,temp,move=0;
        scanf("%d %d %d",&a,&b,&c);
        if(a==b)
        {
            printf("0\n");
        }
        else if(a<b && a<c && b<c)
        {
            printf("1\n");
        }
        else if(a<b)
        {
           while(a<b)
           {
            b=b-c;
            move++;
            a=a+c;
           }
            printf("%d\n",move);
        }
        else if(a>b)
        {
            while(a>b)
            {
                a=a-c;
                move++;
                b=b+c;
            }
            printf("%d\n",move);
        }

    }
}