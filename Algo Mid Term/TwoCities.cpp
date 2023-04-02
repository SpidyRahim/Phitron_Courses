#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
vector<int> adj[MAX];
bool visited[MAX];

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    dfs(1);

    if (visited[n])
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}
