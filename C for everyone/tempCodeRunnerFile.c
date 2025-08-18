#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, n;
        scanf("%d %d", &x, &n);

        if (x > n) {
            printf("Invalid!\n");
            continue;
        }

        for (int i = x; i <= n; i += x) {
            printf("%d\n", i);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
