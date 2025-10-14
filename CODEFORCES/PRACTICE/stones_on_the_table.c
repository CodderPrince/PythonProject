//stones on the table
#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    getchar();
    gets(str);
    int i,count=0;
    for(i=1; i<strlen(str); i++)
    {
        if(str[i] == str[i-1])
        {
            count++;
        }
    }
    printf("%d\n",count);
}