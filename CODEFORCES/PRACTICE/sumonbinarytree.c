/******************************************************
 *    Author:  PRINCE_14                              *
 *          --MD. AN NAHIAN PRINCE                    *
 *          --CSE,BRUR                                *
 *          --CP: Codeforces Round 881 (Div. 3)       *
 *            PB: Sum in Binary Tree [C]              *
 ******************************************************/

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long int n;
        scanf("%llu",&n);
        unsigned long long int sum = n;
        while(n>=1.0)
        {
            n=n/2;
            sum = sum +n;
        }
        printf("%llu\n",sum);
    }

    return 0;
}