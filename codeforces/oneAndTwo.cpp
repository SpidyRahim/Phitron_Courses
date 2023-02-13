#include <iostream>
using namespace std;

int main()
{
    // Number of test cases
    int t;
    cin >> t;

    while (t--)
    {
        // Read the number of elements in the array
        int n;
        cin >> n;

        // Read the elements of the array
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // Initialize two counters for the number of 1s and 2s
        int count1 = 0, count2 = 0;

        // Count the number of 1s and 2s in the array
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        // Check if all the elements are 1s
        if (count1 == n)
        {
            cout << n - 1 << endl;
        }
        // Check if the number of 2s is even
        else if (count2 % 2 == 0)
        {
            cout << count2 / 2 << endl;
        }
        // Otherwise, print -1
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}