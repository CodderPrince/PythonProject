//bit++
#include<stdio.h>
#include<string.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    int i;
    char str[n];
    getchar();
    for(i=0; i<n; i++)
    {
        gets(str);
        if(str[1]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    printf("%d\n",count);
}