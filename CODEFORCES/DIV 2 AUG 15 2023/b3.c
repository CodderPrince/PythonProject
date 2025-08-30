#include <stdio.h>

int main() {
    int n, a, b, c;
    scanf("%d", &n); // Read the number of test cases

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c); // Read the values for a, b, and c

        int first = 0, second = 0;

        // Count the buttons pressed by Anna
        for (int j = 0; j < a; j++) {
            if (j % 2 == 0) {
                first++;
            }
        }

        // Count the buttons pressed by Katie
        for (int j = 1; j <= b; j++) {
            if (j % 2 == 0) {
                first++;
            }
        }

        // Count the buttons pressed by either of them
        for (int j = 1; j <= c; j++) {
            if (j % 2 == 0) {
                second++;
            }
        }

        // Compare the counts and determine the winner
        if (first > second) {
            printf("First\n");
        } else {
            printf("Second\n");
        }
    }

    return 0;
}
