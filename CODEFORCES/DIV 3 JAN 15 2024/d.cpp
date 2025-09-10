#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        long long total_diff = 0;

        for (int i = 0; i < n; ++i) {
            auto it = upper_bound(b.begin(), b.end(), a[i]);
            if (it != b.begin()) {
                --it;
                total_diff += abs(a[i] - (*it));
            }
        }

        cout << total_diff << endl;
    }

    return 0;
}
