#include <iostream>
#include <vector>
using namespace std;

int minOperations(vector<int> &a)
{
    int n = a.size();
    vector<int> dp(n + 1, 0);
    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] % 2 == a[i - 2] % 2)
        {
            dp[i] = dp[i - 1] + 1;
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }
    return dp[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ans = minOperations(a);
        cout << ans << endl;
    }
    return 0;
}
