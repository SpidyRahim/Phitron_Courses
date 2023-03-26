#include <bits/stdc++.h>
using namespace std;

bool is_alternating(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    bool possible = false;

    for (char c = 'a'; c <= 'z'; c++)
    {
        string new_s = s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
            {
                new_s[i] = '0';
            }
            else
            {
                new_s[i] = '1';
            }
        }
        if (is_alternating(new_s))
        {
            possible = true;
            break;
        }
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
