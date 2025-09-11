#include <stdio.h>

int min_operations_to_make_product_divisible_by_k(int *a, int n, int k) {
    int operations = 0;

    // Calculate the product of all the numbers in the array.
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= a[i];
    }

    if (product % k != 0) {
        // If the product is not divisible by k, perform an operation to make it divisible.
        operations++;
    }

    return operations;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int a[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }

        int operations = min_operations_to_make_product_divisible_by_k(a, n, k);
        printf("%d\n", operations);
    }

    return 0;
}
