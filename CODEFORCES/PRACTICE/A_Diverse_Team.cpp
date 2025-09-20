#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, k;
    cin >> n >> k;
    int cnt = 0, temp[100], arr[n];
    for (int i = 0; i < n && cnt < k; i++)
    {
        cin >> arr[i];
        int j;
        for (j = 0; j < cnt; j++)
        {
            if (arr[i] == arr[temp[j]])
            {
                break;
            }
        }
        if (j == cnt)
        {
            temp[cnt++] = i;
        }
    }

    if (cnt == k)
    {
        cout << "YES\n";
        for (int i = 0; i < k; i++)
        {
            cout << (temp[i] + 1) << " ";
        }
        cout << nl;
    }

    else
    {
        cout << "NO\n";
    }

    return 0;
}