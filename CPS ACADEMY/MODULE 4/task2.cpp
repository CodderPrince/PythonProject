#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

const ll mx = 1e5 + 123;
vector<ll> adj[mx];

int main()
{
    ll node, edges;
    cin >> node >> edges;

    int i;

    for (i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        // directed graph so don't need to conneted other node
    }

    // print
    for (i = 1; i <= node; i++)
    {
        for (auto &x : adj[i])
        {
            cout << x << " ";
        }
        cout << nl;
    }

    return 0;
}