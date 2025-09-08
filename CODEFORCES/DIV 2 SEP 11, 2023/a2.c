#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int b[n];
        int c[n + 1];
        for (int i = 0; i < n; i++) {
            b[i] = i + 1;
            c[i + 1] = 1;
        }
        c[0] = 0;

        int flag = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] != a[i + 1]) {
                flag = 0;
                break;
            }
        }

        if (flag) {
            // If all elements in 'a' are the same, swap the first and second elements of 'b'.
            int temp = b[0];
            b[0] = b[1];
            b[1] = temp;
        } else {
            flag = 1;
            for (int i = 0; i < n - 1; i++) {
                if (a[i] < a[i + 1]) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                // If all elements in 'a' are in decreasing order, reverse the permutation 'b'.
                int i = 0;
                int j = n - 1;
                while (i < j) {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                    i++;
                    j--;
                }
            }
        }

        // Find the missing element and place it at the end of the permutation.
        for (int i = 1; i <= n; i++) {
            if (c[i] == 0) {
                b[n - 1] = i;
                break;
            }
        }

        // Print the permutation 'b'.
        for (int i = 0; i < n; i++) {
            printf("%d", b[i]);
            if (i < n - 1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}