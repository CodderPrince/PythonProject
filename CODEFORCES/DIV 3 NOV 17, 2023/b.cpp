#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<long long> weights(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> weights[i];
        }

        std::sort(weights.begin(), weights.end());

        long long maxDifference = 0;
        
        // Find the smallest k such that 2 * k is less than n
        int k = n / 2;

        // Calculate the difference for this k
        for (int i = 0; i < k; ++i) {
            maxDifference += std::abs(weights[i] - weights[n - i - 1]);
        }

        std::cout << maxDifference << std::endl;
    }

    return 0;
}
