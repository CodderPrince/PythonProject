#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

ll solve(ll ar[], ll n, ll target)
{
    ll odd = 0, even = 0;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = target - ar[i];
        sum += x;
        cout<<"Sum: "<<sum<<nl;
        even += x / 2;
        cout<<"Even: "<<even<<nl;
        odd += x % 2;
        cout<<"Odd: "<<odd<<nl;
    }
    ll ans = sum / 3 * 2;
    ans += sum % 3;
    return max(odd * 2 - 1, ans);
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ar[n + 3];
        ll mx = -1;
        for (ll i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }
        ll ans = min(solve(ar, n, mx), solve(ar, n, mx + 1));
        cout << ans << endl;
    }

    return 0;
}