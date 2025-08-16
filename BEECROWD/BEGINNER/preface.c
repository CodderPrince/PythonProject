#include<stdio.h>
int main()
{
    int x,y,q,r;
    scanf("%d%d",&x,&y);//x=7,y=3    && x=-7,y=3 && x=7,y=-3
    q=x/y;//7/3=2.3333=q    q=-7/3= -2.333 && q=
    r=x%y;//r=7%3=1     r= -7%3= -1
    if(r<0) //r= -1<0
    {
        if(q<0)//q= -2.333
        q--;//q= -2.333 - 1 = -3.333= -3
        if(q>0)
        q++;
        r=x-(y*q);//r= -7-(-3*3)=-7+9=2  
    }
        printf("%d %d\n",q,r);
        return 0;
}