#include <stdio.h>
#include <string.h>

int main()
{
    char str[11], str1[11], str3[22];
    int i;
    scanf("%s%s", str, str1);
    int len = strlen(str);
    int len1 = strlen(str1);
    strcpy(str3, str);
    strcat(str3, str1);
    printf("%d %d\n%s\n", len, len1, str3);
    char temp = str[0];
    str[0] = str1[0];
    str1[0] = temp;
    printf("%s %s\n", str, str1);
}