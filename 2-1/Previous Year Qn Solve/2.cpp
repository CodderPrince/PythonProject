#include <iostream>
#include <vector>
using namespace std;

class DisjointSet
{
private:
    vector<int> parent;
    vector<int> rank;

public:
    // Constructor to initialize the disjoint set
    DisjointSet(int n)
    {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; ++i)
        {
            parent[i] = i;
        }
    }

    // Find function with path compression
    int find(int u)
    {
        if (u != parent[u])
        {
            parent[u] = find(parent[u]); // Path compression
        }
        return parent[u];
    }

    // Union by rank
    void unite(int u, int v)
    {
        int rootU = find(u);
        int rootV = find(v);

        if (rootU != rootV)
        {
            if (rank[rootU] < rank[rootV])
            {
                parent[rootU] = rootV;
            }
            else if (rank[rootU] > rank[rootV])
            {
                parent[rootV] = rootU;
            }
            else
            {
                parent[rootV] = rootU;
                rank[rootU]++;
            }
        }
    }

    // Function to check if two elements are in the same set
    bool connected(int u, int v)
    {
        return find(u) == find(v);
    }
};

int main()
{
    int n = 10; // Number of elements
    DisjointSet ds(n);

    // Perform some union operations
    ds.unite(1, 2);
    ds.unite(2, 3);
    ds.unite(4, 5);
    ds.unite(6, 7);
    ds.unite(5, 6);
    ds.unite(3, 7);

    // Check if elements are in the same set
    cout << "1 and 7 connected: " << ds.connected(1, 7) << endl;
    cout << "1 and 4 connected: " << ds.connected(1, 4) << endl;

    return 0;
}
