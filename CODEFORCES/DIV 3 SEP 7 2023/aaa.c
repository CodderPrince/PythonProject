#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, c, count = 0;
        scanf("%d %d %d", &a, &b, &c);
        while (a != b) {
            if (a > b) {
                a -= c;
            } else {
                b -= c;
            }
            count++;
        }
        printf("%d\n", count);
    }
    return 0;
}