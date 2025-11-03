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
        ll i, arr1[n], arr2[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + n);
        ll Equal = equal(arr1, arr1 + n, arr2);
        if (Equal)
        {
            cout << "YES\n";
            return 0;
        }

        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if ((arr1[i] > arr2[i]) || ((arr2[i] - arr1[i]) > 1))
            {
                ans = 1;
                break;
            }
        }
        if (ans == 0)
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