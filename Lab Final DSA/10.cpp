#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    set<int> s1, s2, result;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.insert(x);
    }

    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(result, result.begin()));

    for (int x : result)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
