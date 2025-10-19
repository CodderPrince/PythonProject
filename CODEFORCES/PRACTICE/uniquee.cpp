#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void Unique(vector<ll> &arr)
{
    unordered_map<ll, ll> frequency;

    for (ll num : arr)
    {
        frequency[num]++;
    }

    ll cnt = 0;
    for (auto &pair : frequency)
    {
        if (pair.second == 1)
        {
            cnt++;
        }
    }

    cout << cnt << nl;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &x : arr)
    {
        cin >> x;
    }

    Unique(arr);

    return 0;
}