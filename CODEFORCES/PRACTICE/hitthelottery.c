//hitthelottery.c
#include<stdio.h>

int main()
{
    long long int n;
   // scanf("%lld",&n);
   scanf("%lld",&n);
    int count=0;
    int arr[] = {1,5,10,20,100};
    for(int i=4; i>=0; i--)
    {
        count = count + n/arr[i];//c=0+43/20=2; c=2+3/1=5
        n = n % arr[i];//n=43%20=3;n=3%1=0
    }
    printf("%d\n",count);
}