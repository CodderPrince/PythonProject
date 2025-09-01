#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int q;
        scanf("%d", &q);

        int a[q];
        int front = 0, rear = -1; // Pointers to the front and rear of the array
        int prev = -1; // Previous element in the array
        int max = 0; // Maximum element encountered so far
        int beautiful = 1; // Flag to track if the array is beautiful

        for (int i = 0; i < q; i++) {
            scanf("%d", &a[i]);

            if (beautiful) {
                if (a[i] >= prev) {
                    prev = a[i];
                } else if (a[i] <= max) {
                    max = a[i];
                } else {
                    beautiful = 0;
                }
            }
        }

        int result[q];
        int count = 0; // Number of elements appended to the back of the array

        if (beautiful) {
            while (count < q) {
                if (a[front] >= prev) {
                    prev = a[front];
                    front = (front + 1) % q;
                } else if (a[rear] <= max) {
                    max = a[rear];
                    rear = (rear - 1 + q) % q;
                } else {
                    break;
                }
                result[count] = 1;
                count++;
            }
        }

        for (int i = 0; i < q; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }

    return 0;
}
