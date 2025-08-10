// old 10.4 new 11.4
// create a function to check input date is valid or not [Raajkumar]
/*
1.Check date, month, year validity
2. Check year is leap year or not
3. If leaf year count february is 29 days
*/

#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int ValidDate(struct date d);
int printDate(struct date d);

int main()
{
    struct date inputDate;

    printf("Enter day: ");
    scanf("%d", &inputDate.day);
    printf("Enter month: ");
    scanf("%d", &inputDate.month);
    printf("Enter year: ");
    scanf("%d", &inputDate.year);

    if (ValidDate(inputDate))
    {
        printf("The date is valid: ");
        printDate(inputDate);
    }
    else
    {
        printf("Invalid date entered.\n\n");
    }

    return 0;
}

int ValidDate(struct date d)
{
    if (d.year < 1 || d.month < 1 || d.month > 12 || d.day < 1 || d.day > 31)
    {
        return 0;
    }

    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (d.year % 400 == 0 || (d.year % 4 == 0 && d.year % 100 != 0))
    {
        daysInMonth[1] = 29;
    }

    if (d.day > daysInMonth[d.month - 1])
    {
        return 0;
    }

    return 1;
}

int printDate(struct date d)
{
    char *months[] =
        {
            "January", "February", "March", "April", "May", "June", "July",
            "August", "September", "October", "November", "December"};

    printf("%s %d, %d\n\n", months[d.month - 1], d.day, d.year);
}