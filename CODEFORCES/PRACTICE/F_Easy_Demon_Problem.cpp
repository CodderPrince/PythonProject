#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<long long> a(n), b(m);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;

    while (q--) {
        long long x;
        cin >> x;
        bool found = false;

        for (int r = 0; r < n; ++r) {
            long long row_sum = 0;
            for (int j = 0; j < m; ++j) {
                row_sum += a[r] * b[j];
            }

            for (int c = 0; c < m; ++c) {
                long long total_sum = 0;
                long long col_sum = 0;

                for (int i = 0; i < n; ++i) {
                    for (int j = 0; j < m; ++j) {
                        total_sum += a[i] * b[j];

                    }
                    col_sum += a[i] * b[c];
                }


                if (total_sum - row_sum - col_sum + a[r] * b[c] == x) {
                    found = true;
                    goto end_query; // Use goto for immediate exit of nested loops
                }
            }
        }

    end_query:
        cout << (found ? "YES" : "NO") << "\n";
    }

    return 0;
}