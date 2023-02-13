#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    deque<char> dq;

    for (int i = 0; i < s.size(); i++)
        dq.push_back(s[i]);

    while (!dq.empty())
    {
        if (dq.front() == dq.back())
        {
            dq.pop_front();
            if (dq.size() > 1)
                dq.pop_back();
        }
        else
        {
            break;
        }
    }

    if (dq.empty())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
