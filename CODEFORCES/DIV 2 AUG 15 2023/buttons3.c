#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);

        if (a > b && a > c) {
            printf("First\n");
        } else if (b > a && b > c) {
            printf("Second\n");
        } else if (c > 1) {
            printf("First\n");
        } else {
            if (a == b && b == c && c == 1) {
                printf("First\n");
            } else {
                printf("Second\n");
            }
        }
    }

    return 0;
}
