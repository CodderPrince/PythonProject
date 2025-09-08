#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e = a^b^c^d;
    printf("Result: %d\n",e);

    return 0;
}