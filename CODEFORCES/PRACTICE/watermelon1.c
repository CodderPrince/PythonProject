#include<stdio.h>

int main()
{
    int x;
    scanf("%d",&x);
    if(x%2==0 && x>2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}