/* #include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> bags(n);
        for (int i = 0; i < n; i++)
        {
            cin >> bags[i];
        }

        int num_even = 0, num_odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (bags[i] % 2 == 0)
            {
                num_even++;
            }
            else
            {
                num_odd++;
            }
        }

        if (num_even == n || num_odd == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
 */
/*
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> bags(n);
        for (int i = 0; i < n; i++)
        {
            cin >> bags[i];
        }

        int num_even = 0, num_odd = 0;
        for (int i = 0; i < n; i++)
        {
            if (bags[i] % 2 == 0)
            {
                num_even++;
            }
            else
            {
                num_odd++;
            }
        }

        if (num_even == n || (num_odd > 0 && num_even >= num_odd))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
 */

#include <iostream>
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

        int a[n];
        int mihai_sum = 0, bianca_sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                mihai_sum += a[i];
            }
            else
            {
                bianca_sum += a[i];
            }
        }

        if (mihai_sum > bianca_sum)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}