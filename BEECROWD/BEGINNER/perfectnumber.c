#include<stdio.h>
int main()
{
    int t,count=0;
    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d",&n);
        n=0;
        for(int i=1; i<n; i++)
        {
            if(n%i==0)
            {
                count++;
            }
        }
    }
}