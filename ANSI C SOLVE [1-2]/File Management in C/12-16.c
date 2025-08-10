/*  PRINCE[12105007]
    Write a program that prompts the user for two files,
    one containing a line of text known as source file and other,
    an empty file known as target file and then copies the contents of source file
    into the target file.
    Modify the program so that a specified character is deleted from
    the source file as it is copied to target file.
*/

#include <stdio.h>

int main()
{
    char sourceFileName[100];
    char targetFileName[100];
    char charToDelete;

    printf("\nEnter the source file name: ");
    scanf("%s", sourceFileName);

    printf("Enter the target file name: ");
    scanf("%s", targetFileName);

    printf("Enter the character to delete: ");
    scanf(" %c", &charToDelete);

    FILE *sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Error opening source file.\n");
        return 1;
    }

    FILE *targetFile = fopen(targetFileName, "w");

    int ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (ch != charToDelete)
        {
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);

    printf("\nFile contents copied successfully with '%c' deleted!\n\n", charToDelete);

    return 0;
}
