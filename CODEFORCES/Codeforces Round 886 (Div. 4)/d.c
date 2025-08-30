#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for sorting)
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to find the minimum number of problems to remove for a balanced arrangement
int findMinProblemsToRemove(int n, int k, int difficulties[]) {
    qsort(difficulties, n, sizeof(int), compare);

    int minProblemsToRemove = 0;
    for (int i = 1; i < n; i++) {
        int diff = difficulties[i] - difficulties[i - 1];
        if (diff > k) {
            int numToRemove = (diff - 1) / k;
            minProblemsToRemove += numToRemove;
        }
    }

    return minProblemsToRemove;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        int difficulties[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &difficulties[i]);
        }

        int minProblemsToRemove = findMinProblemsToRemove(n, k, difficulties);
        printf("%d\n", minProblemsToRemove);
    }

    return 0;
}
