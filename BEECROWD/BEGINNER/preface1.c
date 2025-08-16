#include <stdio.h>
int main()
{
    int c,d,e,f,q,r,x,y;
    scanf("%d %d", &x,&y);
    //x=7,y=3 && x=-7,y=3
    if(x<0)
        //7>0 && -7<0
    {
        e = y;//e=3
        if(y<0)//3>0
        {
            e = y*-1;
            //e=
        }
        for(r=0; r<e; r++)
        {
            f = x-r;
            if(f%y==0)
            {
                break;
            }
        }
        q = f/y;
    }
    else
    {
        q=x/y;
        //q=7/3=2.333=2
        r=x%y;
        //r=7%3=1
    }
    printf("%d %d\n",q,r);
    return 0;
}
