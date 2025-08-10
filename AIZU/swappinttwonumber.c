#include<stdio.h>
int main()
{
    int a,b,x;
    for(int i=1; ; i++)//condition faka rakhar mane hosse amora jotogulo test case khusi nite parbo kono somossa nei
    {
    scanf("%d %d",&a,&b);
    x=a;
    a=b;
    b=x;
    if(a==0 || b==0)
    {
        break;
    }
    else
    {
          printf("%d %d\n",a,b);
    }
    }
}