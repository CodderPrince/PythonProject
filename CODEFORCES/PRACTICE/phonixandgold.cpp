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
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }

        ll sum = accumulate(arr.begin(), arr.end(), 0);

        if (sum == x)
        {
            cout << "NO\n";
        }

        else
        {
            cout << "YES\n";
            sort(arr.begin(), arr.end());
            ll s = 0;
            for (int i = 0; i < n; i++)
            {
                s += arr[i];
                if (s == x)
                {
                    swap(arr[i], arr[n - 1]);
                }
                // sum will be equal only one time
                //  this time just swap the i-th element to last element
            }
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << nl;
        }
    }

    return 0;
}