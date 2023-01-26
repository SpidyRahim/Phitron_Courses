/*#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = (res * i) % MOD;
    }
    return res;
}

int beauty(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = (res + i * (n - i + 1)) % MOD;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int beautyOfPerm = beauty(n);
        int sumBeauty = (beautyOfPerm * factorial(n)) % MOD;
        cout << sumBeauty << endl;
    }
    return 0;
}
*/
/* #include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int beauty(int n)
{
    int res = 0;
    for (int i = 1; i <= n; i++)
    {
        res = (res + i * (n - i) * (n + 1)) % MOD;
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sumBeauty = beauty(n);
        cout << sumBeauty << endl;
    }
    return 0;
}
 */
/*#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int n, t;
long long fact[100005], inv[100005];

long long power(long long a, long long b)
{
    long long ans = 1;
    while (b)
    {
        if (b & 1)
            ans = ans * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return ans;
}

int main()
{
    cin >> t;
    fact[0] = 1;
    for (int i = 1; i <= 100000; i++)
    {
        fact[i] = (1ll * i * fact[i - 1]) % mod;
    }
    inv[100000] = power(fact[100000], mod - 2);
    for (int i = 99999; i >= 0; i--)
    {
        inv[i] = (1ll * (i + 1) * inv[i + 1]) % mod;
    }
    while (t--)
    {
        cin >> n;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans = (ans + (1ll * i * (n - i + 1) % mod * fact[n - 1] % mod * inv[i] % mod)) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(2);
    a[2 - 1] = 2;
    cout << a[0] << '\n';
    return 0;
}
