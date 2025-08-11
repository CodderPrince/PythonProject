#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    ll i, res = -1;
    for (i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            res = i;
            break;
        }
    }
    cout << res << nl;

    return 0;
}