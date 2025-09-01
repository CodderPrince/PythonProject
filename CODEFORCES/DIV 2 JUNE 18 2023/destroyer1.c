#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int count[101] = {0};
        for (int i = 0; i < n; i++) {
            int c;
            scanf("%d", &c);
            count[c]++;
        }

        int possible = 1;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            while (count[sum] == 0 && sum < n) sum++;
            if (sum > i) {
                possible = 0;
                break;
            }
            count[sum]--;
        }

        printf("%s\n", (possible) ? "YES" : "NO");
    }

    return 0;
}