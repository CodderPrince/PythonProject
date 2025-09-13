#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);

        long long max_height = 0;
        long long total_height = 0;

        for (int i = 0; i < n; i++) {
            int ai;
            scanf("%d", &ai);
            total_height += ai;
            max_height = (ai > max_height) ? ai : max_height;
        }

        long long left = 1, right = max_height + x;

        while (left < right) {
            long long mid = (left + right) / 2;
            long long water_needed = 0;

            for (int i = 0; i < n; i++) {
                water_needed += mid - max_height > 0 ? mid - max_height : 0;
            }

            if (water_needed <= x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        printf("%lld\n", left - 1);
    }

    return 0;
}
