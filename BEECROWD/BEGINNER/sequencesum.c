#include <stdio.h>
int main()
{  
    int n;
    int x, y, aux;
    int sum;   
    while(1)
    { 
                scanf("%d%d",&x,&y);
                if(x <= 0 || y<=0)
                {
                    break;
                }    
                if(x > y)
                {
                     aux = x;
                     x = y;
                     y = aux;
                }
                sum = 0;//loop er moddhe zero dhorte hobe
                for(int i = x; i <= y; i++)
                {
                       printf("%d ",i);
                       sum = sum + i;
                }
                printf("Sum=%d\n",sum);
    }
    return 0;
}