#include <stdio.h>

#define MAXN 100005

int max_mex(int n, int a[][MAXN]) {
    int row1[MAXN] = {0}, row2[MAXN] = {0};

    // Count the occurrences of each number in both rows
    for (int j = 0; j < n; j++) {
        row1[a[0][j]]++;
        row2[a[1][j]]++;
    }

    // Find the maximum mex
    for (int i = 0; i < 2 * n; i++) {
        if (row1[i] == 0 || row2[i] == 0) {
            return i;
        }
    }

    return -1; // not reachable
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[2][MAXN];

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        int max_mex_val = max_mex(n, a);
        printf("%d\n", max_mex_val);
    }

    return 0;
}