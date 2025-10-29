#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        if (n == 2) {
            cout << -1 << endl;
            continue;
        }
        vector<int> a(n);
        int b = 0;
        for (int i = 1; i < n-1; i++) {
            a[i] = i;
            b ^= i;
        }
        int y = b ^ x;
        if (y == 0 || y >= (1 << 30)) {
            cout << -1 << endl;
            continue;
        }
        a[0] = y;
        a[n-1] = y ^ x ^ b;
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}