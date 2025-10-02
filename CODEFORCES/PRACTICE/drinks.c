//Drinks
#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    int i;
    float sum=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    sum = (float)(sum/n);
    printf("%f\n",sum);

    return 0;
}