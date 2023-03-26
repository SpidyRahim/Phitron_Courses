#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    deque<int> input;
    deque<int> output;

    cin >> n;

    int number;
    for (int i = 0; i < n; i++)
    {
        cin >> number;
        input.push_back(number);
    }

    int sz = input.size();

    for (int i = 0; i < sz; i++)
    {

        if (input.front() > input.back())
        {
            if (output.empty())
            {
                output.push_front(input.back());
                input.pop_back();
            }
            else
            {
                output.push_back(input.back());
                input.pop_back();
            }
        }
        else
        {
            output.push_back(input.front());
            input.pop_front();
        }
    }

    while (!output.empty())
    {
        cout << output.front() << " ";
        output.pop_front();
    }

    return 0;
}
