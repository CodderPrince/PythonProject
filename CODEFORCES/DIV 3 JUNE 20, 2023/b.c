#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int64_t max(int64_t a, int64_t b) {
    return (a > b) ? a : b;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int64_t maxSum = INT64_MIN;
        int minOps = 0;

        int64_t currSum = 0;
        int negCount = 0;

        for (int i = 0; i < n; i++) {
            int64_t num;
            scanf("%" SCNd64, &num);

            if (num < 0)
                negCount++;

            currSum += labs(num);
            maxSum = max(maxSum, num);
        }

        if (negCount % 2 == 0) {
            printf("%" PRId64 " %d\n", currSum, minOps);
        } else {
            printf("%" PRId64 " %d\n", max(currSum - 2 * maxSum, currSum), 1);
        }
    }

    return 0;
}
