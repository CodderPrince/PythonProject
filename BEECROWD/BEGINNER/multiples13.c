#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d", &x, &y);
    if(x>y)
    {
        int total=0;
        for(int i= x; i>=y; i--)
    {
        if(i%13!=0)
        {
            total= total + i;
        }
        
    }
    printf("%d\n",total);
    }
    else if(x<y)
    {
        int total1=0;
        for(int i= y; i>=x; i--)
    {
        if(i%13!=0)
        {
            total1= total1 + i;
        }
        
    }
    printf("%d\n",total1);
    }
    
    return 0;
}