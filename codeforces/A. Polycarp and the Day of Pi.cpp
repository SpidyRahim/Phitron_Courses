#include <iostream>
#include <string>
using namespace std;

const string pi = "314159265358979323846264338327950288419716939937510";

int main()
{
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
