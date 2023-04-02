#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool vis[100001];

// DFS function to detect cycle in unidrected graph
bool dfs(int node, int parent)
{
    vis[node] = true;
    for (int child : adj[node])
    {
        if (!vis[child])
        {
            if (dfs(child, node))
                return true;
        }
        else if (child != parent)
            return true;
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool cycle_exists = false;

    // Checking for cycle
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            if (dfs(i, -1))
            {
                cycle_exists = true;
                break;
            }
        }
    }

    if (cycle_exists)
        cout << "Cycle Exist" << endl;
    else
        cout << "No Cycle" << endl;

    return 0;
}
