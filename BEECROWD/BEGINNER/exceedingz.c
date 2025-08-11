#include<stdio.h>
int main()
{
    int a,b,i,j=0,s=0;
    scanf("%d",&a);//3
    scanf("%d",&b);//4
    for(i=0;i<10000;i++){
    if(a>=b)
    {
         scanf("%d",&b);
    }
    else
    {
        continue;
    }
    }
    for(i=a;i<10000;i++)
    {
        s=s+i;
         j++;
        if(s>b)
        {
            break;
        }
    }
    printf("%d\n",j);
    return 0;
}
