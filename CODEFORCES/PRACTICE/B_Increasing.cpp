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
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (auto &x : arr)
        {
            cin >> x;
        }

        /*if (n == 1)
        {
            cout << "YES\n";
            return 0;
        }*/
        sort(arr.begin(), arr.end());

        /*
        for(auto &x: arr)
        {
            cout<<x<<" ";
        }
        cout<<nl;*/

        int cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] == arr[i])
            {
                cnt = 0;
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