/* #include <bits/stdc++.h>
using namespace std;

int solve(int n, string s)
{
    int l = 0, r = n - 1;
    while (l < n && s[l] == '0')
        l++;
    while (r >= 0 && s[r] == '1')
        r--;
    return max(0, r - l + 1);
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

/* #include <bits/stdc++.h>
using namespace std;

int solve(int n, string s)
{
    int res = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        while (l <= r && s[l] == '0')
            l++;
        while (l <= r && s[r] == '1')
            r--;
        if (l <= r)
        {
            res++;
            l++;
            r--;
        }
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
        string s;
        cin >> s;
        cout << solve(n, s) << endl;
    }
    return 0;
}
 */

// problem D

/* #include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

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
        unordered_map<char, int> char_count;
        for (char c : s)
        {
            char_count[c]++;
        }
        vector<int> count_vec;
        for (auto &[_, count] : char_count)
        {
            count_vec.push_back(count);
        }
        sort(count_vec.rbegin(), count_vec.rend());
        int ans = 0;
        for (int i = 0; i < min(n / 2, (int)count_vec.size()); i++)
        {
            ans += count_vec[i];
        }
        cout << ans << endl;
    }
    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;
int t, n, cnt[26];
string s;

int main()
{
    cin >> t;
    while (t--)
    {
        memset(cnt, 0, sizeof cnt);
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            cnt[s[i] - 'a']++;
        }
        sort(cnt, cnt + 26);
        cout << max(cnt[25] - 1, 0) + max(cnt[24] - 1, 0) << endl;
    }
    return 0;
}