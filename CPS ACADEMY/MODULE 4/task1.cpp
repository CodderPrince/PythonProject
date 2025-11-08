#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

const ll mx = 1e5 + 123;
vector<int> adj[mx];

int main()
{
    ll node, edges;
    cin >> node >> edges;
    int i;

    // input all connected edges
    for (int i = 1; i <= edges; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
        /*
        Here this is an undirected
        graph. Both nodes are connected
        each other.So, if u connected to v
        then v also connected to u.
        Cause this is a bidirectional graph.
        */
    }

    // print
    for (i = 1; i <= node; i++)
    {
        for (auto &x : adj[i])
        /*
        Ekhane adj[i] means print
        all connected edges according
        to the specific nodes
        When adj[1] then print
        node 1 connected all edges
        */
        {
            cout << x << " ";
        }
        cout << nl;
    }

    return 0;
}