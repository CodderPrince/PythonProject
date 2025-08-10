/*
old 10.13 new 11.13         *PRINCE*
10.13 Define a structure that can describe an hotel.
It should have members that include the name, address, grade,
average room charge, and number of rooms.
Write functions to perform the following operations:
• To print out hotels of a given grade in order of charges
• To print out hotels with room charges less than a given value
*/

#include <stdio.h>
#include <string.h>

struct Hotel
{
    char name[100];
    char address[100];
    int grade;
    int roomCharge;
    int numRooms;
};

void gradeByHotels(struct Hotel hotels[], int numHotels, int targetgrade);
void filterByRoomCharges(struct Hotel hotels[], int numHotels, int maxRoomCharge);

int main()
{
    int numHotels;
    printf("Enter the total hotel number: ");
    scanf("%d", &numHotels);

    struct Hotel hotels[numHotels];
    int i;
    for (i = 0; i < numHotels; i++)
    {
        printf("\nEnter the name of hotel %d: ", i + 1);
        scanf(" %[^\n]s", hotels[i].name);
        printf("Enter the hotel address %d: ", i + 1);
        scanf(" %[^\n]s", hotels[i].address);
        printf("Enter the hotel grade %d: ", i + 1);
        scanf("%d", &hotels[i].grade);
        printf("Enter the hotel room charge of hotesls %d: $", i + 1);
        scanf("%d", &hotels[i].roomCharge);
        printf("Enter the number of rooms of hotel %d: ", i + 1);
        scanf("%d", &hotels[i].numRooms);
        printf("\n");
    }

    int targetGrade, maxRoomCharge;

    printf("***Print hotels of a given grade***\n");
    printf("Enter the grade to filter by: ");
    scanf("%d", &targetGrade);
    gradeByHotels(hotels, numHotels, targetGrade);

    printf("***Print hotels with room charges less than a given value***\n");
    printf("Enter the maximum room charges: $");
    scanf("%d", &maxRoomCharge);
    filterByRoomCharges(hotels, numHotels, maxRoomCharge);

    return 0;
}

void gradeByHotels(struct Hotel hotels[], int numHotels, int targetgrade)
{
    printf("\nHotels are avilable this grade: %d\n", targetgrade);
    int i;
    for (i = 0; i < numHotels; i++)
    {
        if (hotels[i].grade == targetgrade)
        {
            printf("Hotels name: %s\n", hotels[i].name);
            printf("Hotel address: %s\n", hotels[i].address);
            printf("Hotels grade: %d\n", hotels[i].grade);
            printf("Hotels room charge: $%d\n", hotels[i].roomCharge);
            printf("Number of rooms: %d\n", hotels[i].numRooms);
            printf("\n");
        }
    }
}

void filterByRoomCharges(struct Hotel hotels[], int numHotels, int maxRoomCharge)
{
    printf("\nHotels are available this room charges: $%d\n", maxRoomCharge);
    int i;
    for (i = 0; i < numHotels; i++)
    {
        if (hotels[i].roomCharge < maxRoomCharge)
        {
            printf("Hotels name: %s\n", hotels[i].name);
            printf("Hotel address: %s\n", hotels[i].address);
            printf("Hotels grade: %d\n", hotels[i].grade);
            printf("Hotels room charge: $%d\n", hotels[i].roomCharge);
            printf("Number of rooms: %d\n", hotels[i].numRooms);
            printf("\n");
        }
    }
}