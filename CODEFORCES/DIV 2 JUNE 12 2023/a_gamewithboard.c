#include <stdio.h>

int nim_sum(int *integers, int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= integers[i];
    }
    return result;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int integers[n];
        for (int i = 0; i < n; i++) {
            integers[i] = 1;
        }
        int nimsum = nim_sum(integers, n);
        if (nimsum == 0) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    }
    return 0;
}