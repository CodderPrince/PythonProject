//Word
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[101];

    scanf("%s",str);

    int i, upper = 0, lower = 0;
    for (i = 0; i < strlen(str); i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            lower++;
        } 
        else //if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            upper++;
        }
    }

    if (lower >= upper) 
    {
        for (i = 0; i < strlen(str); i++) 
        {
            printf("%c", tolower(str[i]));
        }
    } 
    else //if (upper > lower) 
    {
        for (i = 0; i < strlen(str); i++) 
        {
            printf("%c", toupper(str[i]));
        }
    }

    return 0;
}
