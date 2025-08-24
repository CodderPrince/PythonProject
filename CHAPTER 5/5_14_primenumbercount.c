#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=100; i<=200; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("Count: %d\n",count);
    return 0;
}
