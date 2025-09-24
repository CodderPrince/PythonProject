//char.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",&str);
    int i;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("%c\n",str[i]+32);
            return 0;
        }
    }
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("%c\n",str[i]-32);
            return 0;
        }
    }

    return 0;
}