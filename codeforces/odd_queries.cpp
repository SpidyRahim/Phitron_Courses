#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int odd_count = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 1)
            {
                odd_count++;
            }
        }
        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;
            int len = r - l + 1;
            if (len % 2 == 0)
            {
                cout << "YES\n";
            }
            else
            {
                int even_count = len / 2;
                int odd_total = odd_count - even_count;
                int even_total = n - odd_count - even_count;
                if (k % 2 == 0)
                {
                    cout << ((even_total >= odd_total) ? "YES\n" : "NO\n");
                }
                else
                {
                    cout << ((odd_total >= even_total) ? "YES\n" : "NO\n");
                }
            }
        }
    }
    return 0;
}
