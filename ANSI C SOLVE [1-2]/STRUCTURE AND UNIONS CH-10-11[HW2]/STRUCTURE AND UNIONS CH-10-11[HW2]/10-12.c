/*
*PRINCE*
Define a structure named census with the following three members:
• A character array city [] to store names
• A long integer to store population of the city
• A float member to store the literacy level
**Write a program to do the following**
• To read details for 5 cities randomly using an array variable
• To sort the list alphabetically
• To sort the list based on literacy level
• To sort the list based on population
• To display sorted lists
*/

#include <stdio.h>
#include <string.h>

struct census
{
    char cityName[100];
    long population;
    float literacy;
};

int swap(struct census *a, struct census *b);
int sortAlphabetically(struct census cities[], int n);
int displaySortedList(struct census cities[], int n);

int sortLiteracy(struct census cities[], int n);
int sortPopulation(struct census cities[], int n);

int main()
{
    struct census cities[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("****Enter the city details no: %d ****\n", i + 1);
        printf("Enter the city name: ");
        scanf("%s", cities[i].cityName);
        printf("Enter the population: ");
        scanf("%ld", &cities[i].population);
        printf("Enter the literacy level: ");
        scanf("%f", &cities[i].literacy);
    }

    sortAlphabetically(cities, 5);
    printf("\n**Sorted Alphabetically**\n");
    displaySortedList(cities, 5);

    sortLiteracy(cities, 5);
    printf("\n**Sorted by Literacy**\n");
    displaySortedList(cities, 5);

    sortPopulation(cities, 5);
    printf("\n**Sorted by Population**\n");
    displaySortedList(cities, 5);

    return 0;
}

int swap(struct census *a, struct census *b)
{
    struct census temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int sortAlphabetically(struct census cities[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (strcmp(cities[i].cityName, cities[j].cityName) > 0)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

int displaySortedList(struct census cities[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("City: %-10s Population: %-10ld Literacy: %.2f\n", cities[i].cityName, cities[i].population, cities[i].literacy);
    }
    printf("\n");
}

int sortLiteracy(struct census cities[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (cities[i].literacy < cities[j].literacy)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}

int sortPopulation(struct census cities[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (cities[i].population < cities[j].population)
            {
                swap(&cities[i], &cities[j]);
            }
        }
    }
}
