#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    while (n--)
    {
        ll x;
        cin >> x;
        string a, b, c;
        cin >> a >> b >> c;
        ll cnt = 0;
        for (int i = 0; i < x; i++)
        {
            if (a[i] != c[i] && b[i] != c[i])
            {
                cnt = 1;
                break;
            }
        }
        if (cnt)

        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}