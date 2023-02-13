#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<void *> s;

    // Push character data
    char c = 'A';
    s.push(&c);

    // Push integer data
    int i = 42;
    s.push(&i);

    // Push real number data
    double d = 3.14;
    s.push(&d);

    // Pop and print data
    while (!s.empty())
    {
        void *data = s.top();
        s.pop();

        if (data == &c)
        {
            cout << "Character: " << *(char *)data << endl;
        }
        else if (data == &i)
        {
            cout << "Integer: " << *(int *)data << endl;
        }
        else if (data == &d)
        {
            cout << "Real number: " << *(double *)data << endl;
        }
    }

    return 0;
}
