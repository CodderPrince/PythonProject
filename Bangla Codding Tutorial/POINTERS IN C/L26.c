#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int *ptr;
    //  ptr = (int*)(malloc(20));
    /*
    ptr = (typecasting)(malloc(single parameter))
    */

    // ptr = (int *)(calloc(5, sizeof(int)));

    /*
    ptr = (typecasting)(calloc(double parameter))
    */

    int *ptr1, *ptr2;
    ptr1 = (int *)(malloc(20));
    ptr2 = (int *)(calloc(5, sizeof(int)));

    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("\nMemory not allocated!\n\n");
    }
    else
    {
        printf("\nMemory allocate successfully!\n\n");
        // do your work
        // free(ptr);
        // this function free extra size of array
        // printf("Memory freed successfully!\n\n");

        ptr1 = realloc(ptr1, 50);
        printf("Memory reallocation successful!\n\n");
    }
}