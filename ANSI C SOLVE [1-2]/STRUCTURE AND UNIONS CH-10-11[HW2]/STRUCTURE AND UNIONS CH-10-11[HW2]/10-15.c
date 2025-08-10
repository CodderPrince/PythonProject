/*
    old 10.15 new 11.15     **PRINCE**
    10.15 Design a structure student_record to contain name,
    date of birth and total marks obtained.
    Use the date structure designed in Exercise 10.4 (May 5, 2001) to represent the date of birth.
    Develop a program to read data for 10 students in a class and list them rank-wise.
*/

#include <stdio.h>
#include <string.h>

struct Date
{
    int day;
    char month[10];
    int year;
};

struct StudentRecord
{
    char name[15];
    struct Date dateOfBirth;
    double totalMarks;
    int rank;
};

int main()
{
    struct StudentRecord students[3];
    printf("**Enter student details**\n");
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].name);

        printf("Enter the date of birth of student %d:\n", i + 1);
        printf("Enter day: ");
        scanf("%d", &students[i].dateOfBirth.day);
        printf("Enter month: ");
        scanf(" %[^\n]s", students[i].dateOfBirth.month);
        printf("Enter year: ");
        scanf("%d", &students[i].dateOfBirth.year);

        printf("Enter the total marks obtained by student %d: ", i + 1);
        scanf("%lf", &students[i].totalMarks);
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        students[i].rank = 1;
        for (j = 0; j < 3; j++)
        {
            if (students[i].totalMarks < students[j].totalMarks)
            {
                students[i].rank++;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (students[i].rank > students[j].rank)
            {
                struct StudentRecord temp;
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    printf("\n**Rank-wise list of students**\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nRank: %d\n", students[i].rank);
        printf("Name: %s\n", students[i].name);
        printf("Date of Birth: %s %d, %d\n", students[i].dateOfBirth.month, students[i].dateOfBirth.day, students[i].dateOfBirth.year);
        printf("Total marks: %.2lf\n", students[i].totalMarks);
        printf("\n");
    }

    return 0;
}