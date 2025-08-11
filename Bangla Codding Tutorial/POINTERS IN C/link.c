#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
}; // Add a semicolon here

int main()
{
    // Let's assign three values, each initialized to null
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    // Let's allocate memory
    a = malloc(sizeof(struct Node));
    b = malloc(sizeof(struct Node));
    c = malloc(sizeof(struct Node));

    // Check if memory allocation is successful
    if (a == NULL || b == NULL || c == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error code
    }

    // Assign values
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // Connect every node
    a->next = b;
    b->next = c;
    c->next = NULL;

    // Print the linked list traversal using a temporary variable
    struct Node *current = a; // Use a temporary variable to traverse the list

    printf("\nLinked List Traversal:\n");

    while (current != NULL)
    {
        printf("Value of %c = %d\n", 'a' + (current->data - 10), current->data);
        current = current->next;
    }

    // Don't forget to free the allocated memory
    free(a);
    free(b);
    free(c);

    return 0;
}
