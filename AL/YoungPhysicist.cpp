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
    int sum_a = 0, sum_b = 0, sum_c = 0;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        sum_a += a;
        sum_b += b;
        sum_c += c;
    }
    if (sum_a == 0 && sum_b == 0 && sum_c == 0)
        cout << "YES" << endl;

    else
        cout << "NO" << endl;

    return 0;
}