//boyorgirl.c
#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    gets(str);
    int i,j;
    for(i=0; i<strlen(str); i++)
    {
        for(j=i+1; j<strlen(str); j++)
        {
            if(str[i] > str[j])
            {
                char temp;
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    int count=0;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i] != str[i+1])
        {
            count++;
        }
    }

    if(count % 2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}