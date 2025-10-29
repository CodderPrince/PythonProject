#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d%d", &n, &x);

        if (n == 1) {
            printf("%d\n", x);
        } else if (n == 2) {
            printf("-1\n");
        } else {
            printf("%d ", x);

            int current = 1;
            for (int i = 1; i < n - 1; i++) {
                printf("%d ", current);
                x ^= current;
                current++;
            }

            if ((x != 0) && (x != current)) {
                printf("%d\n", x);
            } else {
                printf("-1\n");
            }
        }
    }

    return 0;
}
