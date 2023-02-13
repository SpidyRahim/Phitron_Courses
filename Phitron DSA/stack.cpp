#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class Stack
{
public:
    int a[MAX_SIZE];
    int stackSize;
    Stack()
    {
        stackSize = 0;
    }

    // add an element to the stack , TC = O(1)
    void push(int value)
    {
        if (stackSize + 1 > MAX_SIZE)
        {
            cout << "Stack Is Full" << endl;
            return;
        }

        stackSize++;
        a[stackSize - 1] = value;
    }

    void pop()
    {
        if (stackSize == 0)
        {
            cout << "Stack Is Empty" << endl;
        }
        a[stackSize - 1] = 0;

        stackSize--;
    }

    int top()
    {
        if (stackSize == 0)
        {
            cout << "Stack Is Empty" << endl;
            return -1;
        }
        return a[stackSize - 1];
    }
};

int main()
{
    
    Stack st;
    st.push(3);
    cout << st.top() << endl;
    st.push(55);
    cout << st.top() << endl;
    st.push(99);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    return 0;

}