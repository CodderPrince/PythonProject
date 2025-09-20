#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        int cnt = (mx == a) + (mx == b) + (mx == c);
        if (cnt == 3)
        {
            cout << "YES\n";
            cout << mx << " " << mx << " " << mx << nl;
        }
        else if (cnt == 2)
        {
            cout << "YES\n";
            int mn = min({a, b, c});
            cout << mn << " " << mn << " " << mx << nl;
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
