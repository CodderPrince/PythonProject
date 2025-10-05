#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    vector<ll> arr;

    // Split the number into chunks of 3 digits
    while (t != 0) {
        ll x = t % 1000;   // Get the last 3 digits
        arr.push_back(x);  // Store this chunk
        t = t / 1000;      // Remove the last 3 digits
    }

    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i];
        if (i > 0) cout << ",";
    }
    cout << nl;

    return 0;
}
