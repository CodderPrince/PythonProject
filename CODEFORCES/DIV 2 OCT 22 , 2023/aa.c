#include <stdio.h>

int min_operations(int n, char *binary) {
    int count_zeros = 0; // Count of 0s in the binary string
    int count_ones = 0; // Count of 1s in the binary string
    int operations = 0;

    for (int i = 0; i < n; i++) {
        if (binary[i] == '0') {
            count_zeros++;
        } else {
            count_ones++;
            if (count_zeros > 0) {
                operations++;
                count_zeros--;
            }
        }
    }

    if (count_zeros > 0) {
        return -1; // It's impossible to make it divisible by 2^i
    }

    return operations;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        char binary[100001];
        scanf("%s", binary);

        for (int i = 1; i <= n; i++) {
            int operations = min_operations(i, binary);
            printf("%d ", operations);
        }

        printf("\n");
    }

    return 0;
}
