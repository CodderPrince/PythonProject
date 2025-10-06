//learn_from_math.c
//prince

#include<stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    if(n%2 == 0)
    {
        x = 4;
    }
    else
    {
        x = 9;
    }
    printf("%d %d\n",x, n-x);

    return 0;
}