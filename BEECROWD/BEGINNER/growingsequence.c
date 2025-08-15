#include <stdio.h>
int main()
{
    int a,b;
    while(1)
    {
        scanf("%d", &a);
        if(a==0) 
        {
        break;
        }
        else
        {
            for(b=1; b<a; b++)
                printf("%d ",b);
        }
        printf("%d\n",a);
    }
    return 0;
}