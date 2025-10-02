//elephant
#include<stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    int count = 0;
    if(n%5 == 0)
    {
        count = n/5;
    }
    else
    {
        count = n/5 + 1;
    }

    printf("%d\n",count);

    return 0;
}