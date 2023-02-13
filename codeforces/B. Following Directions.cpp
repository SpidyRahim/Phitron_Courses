/* #include <bits/stdc++.h>
using namespace std;

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
    }
    return x == 1 && y == 1 ? "YES" : "NO";
}

int main()
{
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
 */
/*
#include <bits/stdc++.h>
using namespace std;

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
        if (x == 1 && y == 0)
            return "YES";
        else if (x == 1 && y == 2)
            return "YES";
        else if (x == 2 && y == 1)
            return "YES";
        else if (x == 0 && y == 1)
            return "YES";
    }
    return "NO";
}

int main()
{
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
 */

#include <bits/stdc++.h>
using namespace std;

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
