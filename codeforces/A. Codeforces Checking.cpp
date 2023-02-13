#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char s;
        cin >> s;

        if (s == 'c' || s == 'o' || s == 'd' || s == 'e' || s == 'f' || s == 'r' || s == 's')
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}