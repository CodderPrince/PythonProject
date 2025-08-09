#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        ll a = 1;
        ll b = x - 1;

        if (b >= 1)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}