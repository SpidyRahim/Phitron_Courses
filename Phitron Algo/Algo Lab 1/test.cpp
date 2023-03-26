#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &visited)
{
	visited[node] = true;
	for (int i = 0; i < adj[node].size(); i++)
	{
    	int adjacent = adj[node][i];
    	if (!visited[adjacent])
        	dfs(adjacent, adj, visited);
	}
}

int countConnectedComponents(int n, vector<int> adj[])
{
	vector<bool> visited(n, false);
	int count = 0;
	for (int i = 0; i < n; i++)
	{
    	if (!visited[i])
    	{
        	dfs(i, adj, visited);
        	count++;
    	}
	}
	return count;
}

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> adj[n];
	for (int i = 0; i < m; i++)
	{
    	int u, v;
    	cin >> u >> v;
    	adj[u].push_back(v);
    	adj[v].push_back(u);
	}
	int numComponents = countConnectedComponents(n, adj);
	cout << numComponents << endl;
	return 0;
}
