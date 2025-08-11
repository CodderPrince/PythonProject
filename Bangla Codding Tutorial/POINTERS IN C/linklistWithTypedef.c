//with typedef

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

int main()
{
    // let assign three value which initial value is null
    Node *a = NULL;
    Node *b = NULL;
    Node *c = NULL;

    // let allocate memory size
    a = (Node *)(malloc(sizeof(Node)));
    b = (Node *)(malloc(sizeof(Node)));
    c = (Node *)(malloc(sizeof(Node)));

    // let assign value
    a->data = 10;
    b->data = 20;
    c->data = 30;

    // let connect every node
    a->next = b;
    b->next = c;
    c->next = NULL;

    // let print linked list traverse
    printf("Traverse value:\n");
    while (a != NULL)
    {
        printf("%d -> ", a->data);
        a = a->next;
    }
    printf("\n");

    // Free the allocated memory
    free(a);
    free(b);
    free(c);

    return 0;
}
