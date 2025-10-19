#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

void uniquee(ll arr[], ll n)
{
    ll frequency[n] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (frequency[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt << nl;
}

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    uniquee(arr, n);

    return 0;
}