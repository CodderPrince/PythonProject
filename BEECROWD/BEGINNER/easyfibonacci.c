#include<stdio.h>
int main()
{
    int a,b,c,i,n;
    scanf("%d",&n);
    a=0,b=1;
    for(i=1;i<=n;i++)
    {
        printf("%d ",b);
        c=a+b;//c=0+1=1
        a=b;//a=1
        b=c;//b=1

    }
    printf("%d\n",a);
    return 0;
}
