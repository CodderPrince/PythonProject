#include<stdio.h>
int main()
{
    int arr[10],i,sum=0,count=0;
    for(i=1; i<=6; i++)
    {
        scanf("%lf",arr[i]);
        if(arr[i]>0)
        {
            sum = sum + i;
            count++;
        }
    }
    double avg= sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
}