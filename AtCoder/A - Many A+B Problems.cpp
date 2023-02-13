/* #include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, ans;
        cin >> a >> b;
        ans = a + b;
        cout << ans << endl;
    }
} */
#include <iostream>
#include <vector>
using namespace std;

const int N = 100010;
int n, m;
int p[N];
vector<int> v[N];

int find(int x)
{
    if (p[x] != x)
    {
        p[x] = find(p[x]);
    }
    return p[x];
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        p[i] = i;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int a = find(i);
        for (int j = 0; j < v[i].size(); j++)
        {
            int b = find(v[i][j]);
            if (a != b)
            {
                p[b] = a;
                cnt++;
            }
        }
    }
    cout << m - cnt << endl;
    return 0;
}
