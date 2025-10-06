#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    ll maxx = 1;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            cnt++;
            if (maxx < cnt)
            {
                maxx = cnt;
            }
        }

        else
        {
            cnt = 1;
        }
    }
    cout << maxx << nl;

    return 0;
}