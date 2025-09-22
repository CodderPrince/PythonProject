#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ar[n + 4];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar[i] = pow(10, x);
        }
        if (n == 1)
        {
            cout << k + 1 << endl;
        }
        else
        {
            ll ans = 0;
            ll x;
            k++;
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i + 1] % ar[i] == 0)
                {
                    x = ar[i + 1] / ar[i] - 1;
                }
                else
                {
                    x = ar[i + 1] / ar[i];
                }
                if (x >= k)
                {
                    ans += k * ar[i];
                    k = 0;
                    break;
                }
                else
                {
                    ans += x * ar[i];
                    k -= x;
                }
            }

            if (k)
            {
                ans += k * ar[n - 1];
            }
            cout << ans << endl;
        }
    }

    return 0;
}