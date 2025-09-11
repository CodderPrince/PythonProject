#include <stdio.h>

int main() {
    int t, n, k, x, y, sum, count;

    // Get the number of test cases
    scanf("%d", &t);

    // Loop through the test cases
    for (int i = 0; i < t; i++) {
        // Get the number of coins and the number of desserts
        scanf("%d %d", &n, &k);

        // Initialize the count
        count = 0;

        // Loop through all possible combinations of desserts
        for (x = 0; x <= (1 << k) - 1; x++) {
            // Calculate the sum of the costs of the desserts in the combination
            sum = 0;
            for (y = 0; y < k; y++) {
                if ((x & (1 << y)) != 0) {
                    sum += (1 << y);
                }
            }

            // If the sum is less than or equal to the number of coins,
            // increment the count
            if (sum <= n) {
                count++;
            } else if (sum >= 179 && sum <= n + k - 1) {
                count++;
            }
        }

        // Print the count
        printf("%d\n", count);
    }

    return 0;
}