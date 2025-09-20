// anton-and-letters.c
// prince

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    gets(str);
    int count[26] = {0}, i, distinct = 0;
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            count[str[i] - 'a']++;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            distinct++;
        }
    }
    printf("%d\n", distinct);

    return 0;
}