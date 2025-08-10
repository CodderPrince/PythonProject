// input a string then input a character you want to find [subeen-14]
// prince

#include <stdio.h>

int find(char arr[], char target);

int main()
{
    char str1[100], target;

    printf("Enter the first string: ");
    //scanf("%s", str1);
    gets(str1);
    printf("Enter the character to search for: ");
    scanf("%c",&target);
    int result = find(str1, target);

    if (result)
    {
        printf("The character '%c' is found in the first string.\n", target);
    }
    else
    {
        printf("The character '%c' is not found in the first string.\n", target);
    }

    return 0;
}

int find(char arr[], char target)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            return 1;
        }
        /*else
        {
            return -1;
        }*/
        
    }
    return 0;
}
