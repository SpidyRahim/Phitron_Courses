#include <iostream>
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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool found = false;
        for (int i = 0; i < n - 2; i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (((a[i] + a[j] + a[k]) & 1) == 1)
                    {
                        cout << "YES" << endl;
                        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
            if (found)
                break;
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
