#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    if (n % 2 == 1)
    {
        cout << "-1\n";
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {
                cout << i + 1 << " ";
            }
            else
            {
                cout << i - 1 << " ";
            }
        }
    }
    cout << nl;

    return 0;
}