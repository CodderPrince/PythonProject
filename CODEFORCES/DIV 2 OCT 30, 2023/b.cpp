#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        vector<ll> x(q);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }

        // Process queries
        for (int i = 0; i < q; i++) {
            for (int j = 0; j < n; j++) {
                int k = lower_bound(a.begin() + j, a.end(), a[j] + x[i]) - a.begin();
                if (k != n) {
                    a[k] += x[i] / 2;
                }
            }
        }

        // Print the final array
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
