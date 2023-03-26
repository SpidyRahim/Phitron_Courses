#include <iostream>
#include <vector>

using namespace std;

const int N = 100000;
vector<int> graph[N];
bool visited[N];
bool inStack[N];

bool dfs(int node)
{
    visited[node] = true;
    inStack[node] = true;
    for (auto next : graph[node])
    {
        if (!visited[next])
        {
            if (dfs(next))
                return true;
        }
        else if (inStack[next])
        {
            return true;
        }
    }
    inStack[node] = false;
    return false;
}

bool hasCycle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            if (dfs(i))
                return true;
        }
    }
    return false;
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }
    if (hasCycle(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
