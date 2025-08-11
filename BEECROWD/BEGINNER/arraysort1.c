#include <stdio.h>

int main() {
    int i, j, temp, arr[3];

    printf("Enter three integers:\n");

    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm to sort the integers in ascending order
    for (i = 0; i < 3 - 1; i++) {
        for (j = 0; j < 3 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted integers: ");

    for (i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nUnsorted integers: ");

    for (i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
