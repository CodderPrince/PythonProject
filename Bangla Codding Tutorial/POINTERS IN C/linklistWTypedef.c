//without typedef

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    // let assign three value which initial value is null
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    // let allocate memory size
    a = (struct Node *)(malloc(sizeof(struct Node)));
    b = (struct Node *)(malloc(sizeof(struct Node)));
    c = (struct Node *)(malloc(sizeof(struct Node)));

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

    free(a);
    free(b);
    free(c);

    return 0;
}
