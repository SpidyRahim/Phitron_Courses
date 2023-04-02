#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return arr[0];
    }

    // recursive case
    return arr[n - 1] + sum(arr, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sum(arr, n) << endl;
    return 0;
}
