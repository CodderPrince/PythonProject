#include<stdio.h>

int main()
{
    int a,b,c,ab;
    scanf("%d %d %d",&a,&b,&c);
   int temp;
   if(a>b && a>c)
   {
    temp=a;
   }
   else if(b>a && b>c)
   {
    temp=b;
   }
   else if(c>a && c>b)
   {
    temp=c;
   }
    printf("%d eh o maior\n",temp);
}