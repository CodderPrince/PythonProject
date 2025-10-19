#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    while(n--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a==1&&b==1&&c==1)
        {
            count++;
        }
        else if(a==1&&b==1&&c==0)
        {
            count++;
        }
        else if(a==0&&b==1&&c==1)
        {
            count++;
        }
        else if(a==1&&b==0&&c==1)
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}