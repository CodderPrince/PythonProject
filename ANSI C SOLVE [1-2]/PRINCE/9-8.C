//Prince
//ID: 12105007

#include<stdio.h>
#include<ctype.h>

int conv(char ch)
{
    ch = toupper(ch);
    return ch;
}
int main()
{
    char ch;
    printf("Enter a lowercase character: ");
    scanf("%c",&ch);
    printf("\nConvert to uppercase: %c\n",conv(ch));

    return 0;
}
