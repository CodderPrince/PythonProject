#include<stdio.h>
int main(){
    float num,sum=0,avg=0;
    int count=0;
    float array[6];
    for(int i=1; i<=6; i++)
    {
        scanf("%f",&array[i]);
        if(array[i]>0)
        {
            sum= sum+array[i];
            count++;
        }
    }
    avg= sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
}