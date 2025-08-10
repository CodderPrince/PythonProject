/*  PRINCE[12105007]
    Write a program to create a sequential file that could store details about
    five products. Details include product code, cost and number of items available
    and are provided through keyboard.

*/

#include <stdio.h>

struct Product
{
    int productCode;
    float cost;
    int quantity;
};

int main()
{
    FILE *file;
    file = fopen("products.txt", "w");

    if (file == NULL)
    {
        printf("Failed to create the file.\n");
        return 1;
    }

    struct Product products[5];

    printf("\n**Enter details for five products**\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Product %d:\n", i + 1);
        printf("Product Code: ");
        scanf("%d", &products[i].productCode);
        printf("Cost: $");
        scanf("%f", &products[i].cost);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, "Product Code: %d\n", products[i].productCode);
        fprintf(file, "Cost: $%.2f\n", products[i].cost);
        fprintf(file, "Quantity: %d\n\n", products[i].quantity);
    }

    fclose(file);

    printf("\nProduct details have been written to the file.\n\n");

    return 0;
}
