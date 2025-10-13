//reverse_an_array.c
//prince

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int i,arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}