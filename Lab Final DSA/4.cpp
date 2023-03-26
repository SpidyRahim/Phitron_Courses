#include <bits/stdc++.h>

using namespace std;

bool check_valid_sequence(string sequence)
{
    stack<char> s;
    for (char bracket : sequence)
    {
        if (bracket == '(' || bracket == '{' || bracket == '[')
        {
            s.push(bracket);
        }
        else if (bracket == ')' || bracket == '}' || bracket == ']')
        {
            if (s.empty())
            {
                return false;
            }
            else if ((s.top() == '(' && bracket == ')') || (s.top() == '{' && bracket == '}') || (s.top() == '[' && bracket == ']'))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main()
{
    string sequence;
    cin >> sequence;

    if (check_valid_sequence(sequence))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
