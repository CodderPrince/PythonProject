#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    if(i%2==0)
    {
        
        printf("%d^2 = %d\n",i,(i*i));
    }
    return 0;
}