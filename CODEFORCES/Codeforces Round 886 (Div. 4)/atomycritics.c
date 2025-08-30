/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *            PB: A. To My Critics                    *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if((a+b)>=10 || (a+c)>=10 || (b+c)>=10)
        {
            printf("YES\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}