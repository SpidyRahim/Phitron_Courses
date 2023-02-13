#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    // enqueue
    q.push(5);
    q.push(10);
    q.push(15);

    // size
    cout << q.size() << endl;
    // empty check
    cout << "Empty ? If yes it will be 1 if not will be 0 : " << q.empty() << endl;

    // front print
    cout << q.front() << endl;
    // dequeue
    q.pop();

    cout << q.front() << endl;

    queue<char> q2;
    // enqueue
    q2.push('r');
    q2.push('a');
    q2.push('h');

    // size
    cout << q2.size() << endl;
    // empty check
    cout << "Empty ? If yes it will be 1 if not will be 0 : " << q2.empty() << endl;

    // front print
    cout << q2.front() << endl;
    // dequeue
    q2.pop();
    cout << q2.front() << endl;
    q2.pop();
    cout << q2.front() << endl;

    return 0;
}