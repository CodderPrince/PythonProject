#include<stdio.h>
int main()
{
    float num;
    int i,count=0;;
    float sum=0,avg=0;
    for(i=1; i<=6; i++)
    {
        scanf("%f",&num);
        if(num>0)
        {
             sum= sum+num;
            count++;
        }
    }    
        avg= sum/count;
        printf("%d valores positivos\n",count);
        printf("%.1f\n",avg);
}