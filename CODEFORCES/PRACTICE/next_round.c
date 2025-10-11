//next_round.c
#include<stdio.h>

int main()
{
    int a,n,i;
    scanf("%d %d",&a,&n);
    int arr[a];
    for(i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(i=0; i<a; i++)
    {
        if(arr[i]>=arr[n-1] && arr[i]>0)
        {
            count++;
        } 
    }
    printf("%d\n",count);

    return 0;
}