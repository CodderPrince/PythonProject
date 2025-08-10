/*  PRINCE[12105007]
    Write a program that appends one file at the end of another.
    Firstly create source and destination file.txt format
    Then access the file.txt mode
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char sourceFileName[100];
    char destinationFileName[100];

    printf("\nEnter the name of the source file: ");
    scanf("%s", sourceFileName);

    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    FILE *sourceFile = fopen(sourceFileName, "r");
    FILE *destinationFile = fopen(destinationFileName, "a");

    if (sourceFile == NULL || destinationFile == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    printf("File appended successfully.\n\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}