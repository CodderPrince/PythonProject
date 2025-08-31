#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        // If n is even, we can print the permutation [2, 1, 4, 3, 6, 5, ...].
        // This guarantees that each ai and a(i mod n)+1 have a GCD of 1,
        // resulting in the maximum possible score of n/2.
        if (n % 2 == 0) {
            for (int i = 1; i <= n; i += 2) {
                printf("%d %d ", i + 1, i);
            }
        }
        // If n is odd, we can print the permutation [2, 1, 4, 3, 6, 5, ..., n-1, n].
        // This also guarantees that each ai and a(i mod n)+1 have a GCD of 1,
        // resulting in the maximum possible score of (n+1)/2.
        else {
            printf("2 1 ");
            for (int i = 3; i <= n; i += 2) {
                printf("%d %d ", i + 1, i);
            }
        }

        printf("\n");
    }

    return 0;
}