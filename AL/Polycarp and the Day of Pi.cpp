// This is Rahim
#include<bits/stdc++.h>
using namespace std;
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const string pi = "314159265358979323846264338327950288419716939937510";

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int i;
        for (i = 0; i < min(n.length(), pi.length()); i++)
        {
            if (n[i] != pi[i])
                break;
        }
        cout << i << endl;
    }

    return 0;
}