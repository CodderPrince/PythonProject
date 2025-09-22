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
        ll n, m;
        cin >> n >> m;
        ll sum = 0;
        ll temp[100], j = 0, cnt = 0;
        for (ll i = m; i <= n; i += m)
        {
            temp[j] = i;
            j++;
            cnt++;
        }
        // cout<<cnt<<nl;
        /*for(int i=0; i<3;i++ )
        {
            cout<<temp[i]<<" ";
        }*/
        for (ll i = 0; i < cnt; i++)
        {
            sum += temp[i] % 10;
        }
        cout << sum << nl;
    }

    return 0;
}