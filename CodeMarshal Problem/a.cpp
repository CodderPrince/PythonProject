#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    sort(arr.begin(), arr.end());

    if (n == k)
    {
        cout << "No\n";
    }
    //1 1 1 4 4 5
    else if (accumulate(arr.begin(), arr.begin() + k - 1, 0) >= arr[k - 1])
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }

    return 0;
}