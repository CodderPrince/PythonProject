// add two string, copy s2 to s1, then compare them, then concatenates copy+s3
// prince

#include <stdio.h>
#include <string.h>

int copy(char copyString[], char str1[]);
int compare(char str1[], char str2[]);
int concatenates(char copyString[], char str3[]);

int main()
{
    char str1[101], str2[101], copyString[101], str3[101];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    copy(copyString, str1);
    printf("Copied string is: %s\n", copyString);
    int result = compare(str1, str2);
    if (result == 0)
    {
        printf("This two string is equal!\n");
    }
    else
    {
        printf("This two string is not equal!\n");
    }
    printf("Enter the third string: ");
    gets(str3);
    concatenates(copyString, str3);
    printf("Final string is: %s\n\n", copyString);

    return 0;
}

int copy(char copyString[], char str1[])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        copyString[i] = str1[i];
    }
    copyString[i] = '\0';
}
int compare(char str1[], char str2[])
{
    int i = 0;
    while (str1[i] == str2[i] && str1[i] != '\0')
    {
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int concatenates(char copyString[], char str3[])
{
    int i = 0, j = 0;
    while (copyString[i] != '\0')
    {
        i++;
    }
    while (str3[j] != '\0')
    {
        copyString[i] = str3[j];
        i++;
        j++;
    }
    copyString[i] = '\0';
}