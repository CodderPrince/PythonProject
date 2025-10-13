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
        vector<ll> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }

        if (n == 1)
        {
            cout << "YES\n";
            //return 0;
        }

        else
        {
            ll flag = 1;
            for (int i = 0; i < n - 1; i++)
            {
                sort(arr.begin(), arr.end());
                if (abs(arr[i] - arr[i + 1]) > 1)
                {
                    cout << "NO\n";
                    flag = 0;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES\n";
            }
        }
    }

    return 0;
}