#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll a, b;
    cin >> a >> b;
    vector<ll> arr(b);
    for (auto &x : arr)
    {
        cin >> x;
    }
    sort(arr.begin(), arr.end());
    cout << arr[0] << nl;

    return 0;
}