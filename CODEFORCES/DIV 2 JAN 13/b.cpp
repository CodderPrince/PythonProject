#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += a[i];
        }
        if (x % 2 == 1) {
            sum -= a[k-1];
            sum += -a[k-1];
        }
        for (int i = k; i < n; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}
