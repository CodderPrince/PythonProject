#include <stdio.h>
#include <math.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int result = 0;
        for (int k = 0; k <= n/2; k++) {
            result += pow(2, k) + pow(2, n-k);
        }

        if (n % 2 == 0) {
            result -= pow(2, n/2);
        }

        printf("2^%d + ",result);
    }

    return 0;
}
