//prince
#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,c,temp,move=0;
        scanf("%d %d %d",&x,&y,&c);
        if(x==y)
        {
            printf("0\n");
        }
        else if(x<y && x<c && y<c)
        {
            printf("1\n");
        }
        else if(x<y)
        {
           while(x<y)
           {
            y=y-c;
            move++;
            x=x+c;
           }
            printf("%d\n",move);
        }
        else if(x>y)
        {
            while(x>y)
            {
                x=x-c;
                move++;
                y=y+c;
            }
            printf("%d\n",move);
        }

    }

    return 0;
}