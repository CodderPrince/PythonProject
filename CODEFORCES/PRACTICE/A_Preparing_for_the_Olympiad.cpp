#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        vector<int> dp(n + 1, -1e9);
        dp[0] = 0;

        for (int i = 0; i < n; ++i) {
            vector<int> next_dp = dp;
            for (int j = 0; j <= i; ++j) {
                // Option 1: Monocarp doesn't train on day i
                next_dp[j + 1] = max(next_dp[j + 1], dp[j]);
                
                // Option 2: Monocarp trains on day i
                int s = 0;
                if (i + 1 < n) {
                    s = b[i + 1];
                }
                next_dp[j + 1] = max(next_dp[j + 1], dp[j] + a[i] - s);
            }
            dp = next_dp;
        }

        int max_diff = *max_element(dp.begin(), dp.end());
        cout << max_diff << endl;
    }
    return 0;
}