#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

// Function to perform Depth First Search and find the farthest node from a given start node
void dfs(int node, vector<vector<int>> &adj_list, vector<bool> &visited, vector<int> &dist)
{
    visited[node] = true;
    for (int neighbor : adj_list[node])
    {
        if (!visited[neighbor])
        {
            dist[neighbor] = dist[node] + 1;
            dfs(neighbor, adj_list, visited, dist);
        }
    }
}

// Function to find the diameter of the tree
int findDiameter(vector<vector<int>> &adj_list, int n)
{
    vector<bool> visited(n, false);
    vector<int> dist(n, 0);

    // Perform DFS from node 0 to find the farthest node
    dfs(0, adj_list, visited, dist);
    int farthest_node = max_element(dist.begin(), dist.end()) - dist.begin();

    // Reset visited and dist arrays for the second DFS
    fill(visited.begin(), visited.end(), false);
    fill(dist.begin(), dist.end(), 0);

    // Perform DFS from the farthest node to find the second farthest node
    dfs(farthest_node, adj_list, visited, dist);
    int diameter = *max_element(dist.begin(), dist.end());

    return diameter;
}

int main()
{
    int n; // Number of nodes in the tree
    cout << "Enter the number of nodes: ";
    cin >> n;

    vector<vector<int>> adj_list(n);

    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < n - 1; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int diameter = findDiameter(adj_list, n);
    cout << "Diameter of the tree: " << diameter << endl;

    return 0;
}
