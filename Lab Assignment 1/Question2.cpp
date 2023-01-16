#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    int total = (n * (n + 1)) / 2;
    cout << total - sum;
}