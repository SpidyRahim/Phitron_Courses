// This is Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    sort(height.begin(), height.end());

    for (int i = 0; i < n; i++)
    {
        cout << height[i] << " ";
    }

    return 0;
}