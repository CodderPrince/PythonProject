#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, n;
        scanf("%d %d %d", &a, &b, &n);

        int maxTime = b;

        while (n--) {
            int x;
            scanf("%d", &x);

            maxTime = min(maxTime + x, a);
        }

        printf("%d\n", maxTime);
    }

    return 0;
}