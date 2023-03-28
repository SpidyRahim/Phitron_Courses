// This is Rahim
#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
    Faster;
    int n;
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i - 1;
        cout << sum << "\n";
    }

    return 0;
}