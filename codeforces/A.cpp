#include <bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        bool flag = false;
        for (int x = 1; x <= n; x++)
        {
            int y = n / (x + x);
            if (pow(x, y) * x + pow(y, x) * y == n)
            {
                cout << x << " " << y << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
    }
    return 0;
}