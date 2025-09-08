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
        for (int i = 0; i < n; i++) {
            b[i] = i + 1;
        }

        for (int i = 0; i < n - 1; i++) {
            if (a[i] == a[i + 1]) {
                int temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }

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
