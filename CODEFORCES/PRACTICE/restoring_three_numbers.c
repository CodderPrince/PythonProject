//restoring_three_numbers.c
//prince

#include<stdio.h>

int main()
{
    int a,b,c,n,temp,x,y,z;
    scanf("%d %d %d %d",&a,&b,&c,&n);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(c>n)
    {
        temp=c;
        c=n;
        n=temp;
    }
    x = n-a;
    y = n-b;
    z = n-c;
    printf("%d %d %d\n",x,y,z);

    return 0;
}