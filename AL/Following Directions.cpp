// This is Rahim
#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

string solve(int n, string s)
{
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            x--;
        else if (s[i] == 'R')
            x++;
        else if (s[i] == 'U')
            y++;
        else if (s[i] == 'D')
            y--;
        if (x == 1 && y == 1)
            return "YES";
    }
    return "NO";
}
int main()
{
    Faster;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(n, s) << endl;
    }

    return 0;
}