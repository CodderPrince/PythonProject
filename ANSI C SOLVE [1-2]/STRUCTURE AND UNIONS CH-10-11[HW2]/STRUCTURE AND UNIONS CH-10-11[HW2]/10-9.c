/*
***old 10.9 new 11.9*** PRINCE
Write a class template to represent a generic vector. Include member functions to
perform the following tasks:
(a) To create the vector
(b) To modify the value of a given element
(c) To multiply by a scalar value
(d) To display the vector in the following form (10, 20, 30 …)
*/

#include <stdio.h>

struct prince
{
    int size;
    int elements[100];
};

int displayVector(struct prince v);
int modifyVector(struct prince *v, int index, int newValue);
int multiplyVector(struct prince *v, int scalar);

int main()
{
    struct prince v;
    int size;
    printf("Enter the vector size: ");
    scanf("%d", &v.size);
    printf("Enter the elements: ");
    int i;
    for (i = 0; i < v.size; i++)
    {
        scanf("%d", &v.elements[i]);
    }

    printf("Original Vector: ");
    displayVector(v);

    int index, newValue;
    printf("Enter the index you want to modify: ");
    scanf("%d", &index);
    printf("Enter the new value: ");
    scanf("%d", &newValue);

    modifyVector(&v, index, newValue);

    printf("Modified Vector: ");
    displayVector(v);

    int scalar;
    printf("Enter a scalar value to multiply: ");
    scanf("%d", &scalar);
    multiplyVector(&v, scalar);

    printf("After multiplying the vector: ");
    displayVector(v);

    return 0;
}

int displayVector(struct prince v)
{
    int i;
    printf("(");
    for (i = 0; i < v.size; i++)
    {
        printf("%d", v.elements[i]);
        if (i < v.size - 1)
        {
            printf(", ");
        }
    }
    printf(")");
    printf("\n");
}

int modifyVector(struct prince *v, int index, int newValue)
{
    if (index >= 0 && index < v->size)
    {
        v->elements[index] = newValue;
    }
    else
    {
        printf("Invalid index for modification!\n");
    }
}

int multiplyVector(struct prince *v, int scalar)
{
    int i;
    for (i = 0; i < v->size; i++)
    {
        v->elements[i] = v->elements[i] * scalar;
    }
}
