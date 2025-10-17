#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, m;
    cin >> n >> m;
    ll cnt = 0;
    for (int i = 0; i <= 1000; i++)
    {
        for (int j = 0; j < 1000; j++)
        {
            ll x = i * i + j;
            ll y = i + j * j;
            if (x == n && y == m)
            {
                cnt++;
            }
        }
    }

    cout << cnt << nl;

    return 0;
}