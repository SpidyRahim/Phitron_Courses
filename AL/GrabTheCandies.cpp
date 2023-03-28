// This is Rahim
#include <bits/stdc++.h>
using namespace std;
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        /*int n; ETA KORBO JOKHON AMI VECTOR E PUSH KORBO
        cin >> n;

        vector<int> v; // create an empty vector

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x); // add the integer x to the end of the vector
        }
        */
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                even += v[i];
            }
            else
            {
                odd += v[i];
            }
        }
        if (even > odd)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}