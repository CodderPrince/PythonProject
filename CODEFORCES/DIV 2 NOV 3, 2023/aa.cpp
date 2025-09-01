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

        vector<int> a(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int minLength = abs(a[n - 1] - a[n]);
        cout << minLength << endl;

        for (int i = 0; i < n; i++) {
            cout << a[i] << " " << a[2 * n - i - 1] << endl;
        }
    }

    return 0;
}