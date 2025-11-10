#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    set<ll> distinctValues;
    ll i;
    ll x;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        ll num;
        cin >> num;
        distinctValues.insert(num);
    }
    ll total = distinctValues.size();
    cout << total << nl;

    return 0;
}