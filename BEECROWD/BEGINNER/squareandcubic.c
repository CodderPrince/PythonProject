#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
}