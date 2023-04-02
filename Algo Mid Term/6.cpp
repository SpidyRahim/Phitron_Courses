#include <bits/stdc++.h>
using namespace std;

const int N = 2000;

int n, m;
int maze[N][N], visited[N][N], level[N][N];
string direction[N][N];

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
char dir[] = {'R', 'L', 'U', 'D'};

bool is_inside_maze(pair<int, int> coordinate)
{
    int x = coordinate.first;
    int y = coordinate.second;

    return x >= 0 && x < n && y >= 0 && y < m;
}

bool is_forbidden(pair<int, int> coordinate)
{
    int x = coordinate.first;
    int y = coordinate.second;

    return maze[x][y] == -1;
}

bool is_visited(pair<int, int> coordinate)
{
    int x = coordinate.first;
    int y = coordinate.second;

    return visited[x][y] == 1;
}

void bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    q.push(src);
    visited[src.first][src.second] = 1;

    while (!q.empty())
    {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + dx[i];
            int new_y = y + dy[i];

            pair<int, int> adj_node = {new_x, new_y};

            if (is_inside_maze(adj_node) && !is_forbidden(adj_node) && !is_visited(adj_node))
            {
                visited[new_x][new_y] = 1;
                level[new_x][new_y] = level[x][y] + 1;
                direction[new_x][new_y] = direction[x][y] + dir[i];
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    pair<int, int> src;
    vector<pair<int, int>> dst;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            if (str[j] == 'M' || str[j] == '#')
            {
                maze[i][j] = -1;
            }
            else if (str[j] == 'A')
            {
                src = {i, j};
            }
            else if ((i == 0 && str[j] == '.') || (i == n - 1 && str[j] == '.') || (j == 0 && str[j] == '.') || (j == m - 1 && str[j] == '.'))
            {
                dst.push_back({i, j});
            }
        }
    }

    bfs(src);

    for (int i = 0; i < dst.size(); i++)
    {
        int x = dst[i].first;
        int y = dst[i].second;

        if (visited[x][y] == 1)
        {
            cout << "YES" << endl;
            cout << level[x][y] << endl;
            cout << direction[x][y] << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}
