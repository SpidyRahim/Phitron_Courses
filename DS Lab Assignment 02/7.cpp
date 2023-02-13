/* #include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void deleteValue(list<int> &l, int value)
{
    auto it = l.begin();
    while (it != l.end())
    {
        if (*it == value)
        {
            it = l.erase(it);
            break;
        }
        else
        {
            ++it;
        }
    }
}

int main()
{
    int n, value;
    list<int> l;

    cout << "Enter the number of elements in the list: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        l.push_back(x);
    }

    cout << "Enter the value to be deleted: ";
    cin >> value;

    deleteValue(l, value);
    cout << "List after deleting " << value << ": ";
    for (const int &i : l)
        cout << i << ' ';
    cout << endl;
    return 0;
}
 */

#include <bits/stdc++.h>
using namespace std;

void deleteValue(list<int> &l, int value)
{
    auto it = l.begin();
    while (it != l.end())
    {
        if (*it == value)
        {
            it = l.erase(it);
            break;
        }
        else
        {
            ++it;
        }
    }
}

void print(list<int> &l)
{
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";

    cout << "\n";
}

int main()
{
    list<int> l = {7, 3, 8, 4, 5, 4};

    print(l);

    deleteValue(l, 4);

    print(l);

    return 0;
}
