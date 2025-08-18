#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int isSorted = 1; // Assume the array is sorted initially

        // Check each element to see if it's in ascending order
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i-1]) {
                isSorted = 0; // If any element is out of order, set isSorted to false
                break; // No need to check further, exit the loop
            }
        }

        // Print the result
        if (isSorted) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
