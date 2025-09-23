//capital_or_small_digit.c
//prince

#include<stdio.h>
#include<string.h>

int main()
{
    char str[101];
    scanf("%s",str);
    int i;
    for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            printf("ALPHA\nIS CAPITAL\n");
            return 0;
        }
    }
     for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            printf("ALPHA\nIS SMALL\n");
            return 0;
        }
    }
     for(i=0; i<strlen(str); i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            printf("IS DIGIT\n");
            return 0;
        }
    }

    return 0;
}