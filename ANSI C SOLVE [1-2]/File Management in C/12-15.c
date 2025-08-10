/*  PRINCE[12105007]
Write a program that reads a file containing integers and appends at its end
the sum of all the integers.
Firstly Create a file and store some integers file
Then access the file
*/

#include <stdio.h>

int main()
{
    FILE *file;
    int num, sum = 0;

    file = fopen("integers.txt", "r");

    if (file == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1)
    {
        sum = sum + num;
    }

    fclose(file);

    file = fopen("integers.txt", "a");

    fprintf(file, "%d\n", sum);

    fclose(file);

    printf("\nSum appended to the file.\n\n");

    return 0;
}