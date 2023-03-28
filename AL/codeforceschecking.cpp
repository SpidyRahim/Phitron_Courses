// This is Rahim
#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
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

    return 0;
}