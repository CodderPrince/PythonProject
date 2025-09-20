#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of the array
        vector<int> a(n);
        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        // Find the MEX (Minimum Excluded Value)
        int mex = 0;
        while (freq[mex] > 0) {
            mex++;
        }

        if (mex == 0) {
            // If MEX is 0, the array can already be reduced to zero in 1 operation
            cout << 1 << '\n';
        } else if (freq[mex - 1] > 1) {
            // If there are duplicates of (MEX-1), it takes 1 operation
            cout << 1 << '\n';
        } else {
            // Otherwise, it takes 2 operations
            cout << 2 << '\n';
        }
    }

    return 0;
}
