// This is Rahim
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (char c : s)
    {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u' || tolower(c) == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << ((char)tolower(c));
        }
    }
    return 0;
}
