#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int> mp;
    queue<int> q;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        q.push(i);
    }
    int ans;

    while (!q.empty())
    {
        int z = q.front();
        ans = z + 1;
        if (mp[z] + m >= ar[z])
        {
            q.pop();
        }
        else
        {
            q.pop();
            mp[z] += m;
            q.push(z);
        }
    }
    cout << ans << nl;

    return 0;
}