// old 9.8 new 10.8
// convert lowercase character to uppercase

#include <stdio.h>
#include <string.h>

char convert(char ch);

int main()
{
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase character %c is convert to: %c\n ", ch, convert(ch));
    }
    else
    {
        printf("Invalid input! Enter a lowercase character!");
    }

    return 0;
}

char convert(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 32;
    }
    else
    {
        return 0;
    }
}