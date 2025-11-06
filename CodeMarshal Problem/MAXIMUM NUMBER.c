#include<stdio.h>
int main(){
int i,t,x,y,z;
scanf("%d",&t);
for(i=1; i<=t; i++)
{
    scanf("%d %d %d", &x,&y,&z);
    if(x>=y && x>=z)
    {
        printf("Case %d: %d\n",i,x);
    }
    else if(y>=x && y>=z)
    {
        printf("Case %d: %d\n",i,y);
    }
    else
    {
        printf("Case %d: %d\n",i,z);
    }

}


return 0;}
