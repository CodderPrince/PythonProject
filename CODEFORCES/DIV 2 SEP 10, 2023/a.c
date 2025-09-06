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
        int k = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] != 0) {
                k++;
                printf("%d ", k);
                for (int j = i; j < n; j++) {
                    a[j] ^= a[i];
                }
                printf("\n%d %d\n ", i + 1, n);
            }
        }
    }
    return 0;
}