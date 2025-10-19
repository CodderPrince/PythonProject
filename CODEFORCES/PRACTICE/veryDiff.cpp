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
        ll a1, a2;
        cin >> a1 >> a2;
        vector<ll> arr1(a1);
        vector<ll> arr2(a2);

        for (auto &i : arr1)
        {
            cin >> i;
        }

        for (auto &i : arr2)
        {
            cin >> i;
        }

        sort(arr1.begin(), arr1.end());
        // reverse(arr2.begin(), arr2.end());
        sort(arr2.rbegin(), arr2.rend());

        /*for(auto x: arr2)
        {
            cout<<x<<" ";
        }
        cout<<nl;*/

        ll ans = 0, s1 = 0, s2 = 0, e1 = a1 - 1, e2 = a2 - 1;

        while (s1 <= e1)
        {
            if (abs(arr1[s1] - arr2[s2]) > abs(arr1[e1] - arr2[e2]))
            {
                ans = ans + abs(arr1[s1] - arr2[s2]);
                s1++;
                s2++;
            }
            else
            {
                ans = ans + abs(arr1[e1] - arr2[e2]);
                e1--;
                e2--;
            }
        }

        cout << ans << nl;
    }

    return 0;
}