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
        ll n;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "1" << nl;
    }

    return 0;
}