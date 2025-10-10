/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --CP: Codeforces Round 835 (Div. 4)       *
 *            PB: Medium number [A]                   *
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
       if(a<b && a>c || a<c && a>b)
       {
             printf("%d\n",a);
       }
           
        else if(b>a && b<c || b<a && b>c)
        {
            printf("%d\n",b);
        }
            
        else
        {
            printf("%d\n",c);
        }
            
    }

    return 0;
}