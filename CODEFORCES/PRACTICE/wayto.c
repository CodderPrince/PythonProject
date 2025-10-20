//Way Too Long Words
#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        char str[101];
        gets(str);
        if((strlen(str)-1)>=10)
        {
            printf("%c%d%c\n",str[0],(strlen(str)-2),str[(strlen(str))-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }

    return 0;
}