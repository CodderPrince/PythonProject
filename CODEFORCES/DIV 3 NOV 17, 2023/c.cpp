#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        long long maxSum = a[0];
        long long currentSum = a[0];

        for (int i = 1; i < n; ++i) {
            // Check if adjacent elements have different parity
            if ((a[i] % 2 == 0 && a[i - 1] % 2 != 0) || (a[i] % 2 != 0 && a[i - 1] % 2 == 0)) {
                currentSum += a[i];
            } else {
                currentSum = a[i];
            }

            maxSum = std::max(maxSum, currentSum);
        }

        std::cout << maxSum << std::endl;
    }

    return 0;
}
