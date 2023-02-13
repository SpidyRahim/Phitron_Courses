#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int max_value = s - r; // calculate the maximum value of the dice
        int a[n];
        for (int i = 0; i < n - 1; i++)
        {
            a[i] = 1; // fill the array with the remaining values
        }
        a[n - 1] = max_value; // fill the last element with the maximum value
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " "; // output the array in any order
        }
        cout << endl;
    }
    return 0;
}
