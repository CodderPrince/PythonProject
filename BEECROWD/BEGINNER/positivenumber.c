#include<stdio.h>
 
int main()
{
    float x;
    int i,count=0;
    for(i=1;i<=6;i++){
        scanf("%f",&x);
        if(x>0)
        {
         count++;
        }
    }
    printf("%d valores positivos\n",count);
    return 0;
}