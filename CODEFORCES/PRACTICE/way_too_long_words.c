//way_too_long_words.c
//prince

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
        int len=0,i;
        len = strlen(str);
        if(len>10)
        {
            printf("%c%d%c\n",str[0],len-2,str[len-1]);
        }
        else
        {
            printf("%s\n",str);
        }
    }

    return 0;
}