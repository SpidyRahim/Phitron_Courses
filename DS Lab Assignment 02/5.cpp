#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *next;
    node *prev;
};

template <class T>
class Deque
{
public:
    node<T> *head;
    node<T> *tail;
    int sz;

    node<T> *CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;

        return newnode;
    }

public:
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    void push_back(T value)
    {

        node<T> *newnode = CreateNewNode(value);

        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        sz++;
    }

    void push_front(T value)
    {
        node<T> *newnode = CreateNewNode(value);

        if (sz == 0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }

        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        sz++;
    }

    void pop_front()
    {
        if (sz == 0)
        {
            cout << "Empty Deque\n";
            return;
        }

        if (sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> *temp = head;
        head = temp->next;
        head->prev = NULL;
        delete temp;

        sz--;
    }

    void pop_back()
    {
        if (sz == 0)
        {
            cout << "Empty Deque\n";
            return;
        }

        if (sz == 1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> *temp = tail;
        tail = temp->prev;
        tail->next = NULL;
        delete temp;

        sz--;
    }

    T front()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            T a;
            return a;
        }
        return head->data;
    }

    T back()
    {
        if (sz == 0)
        {
            cout << "Deque is empty\n";
            T a;
            return a;
        }
        return tail->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    Deque<int> dq1;

    dq1.push_back(5);
    dq1.push_back(10);
    dq1.push_back(15);
    cout << "In Front: " << dq1.front() << endl;
    cout << "In Back: " << dq1.back() << endl;
    cout << "Recent Size: " << dq1.size() << endl;
    dq1.push_front(50);
    dq1.push_front(100);
    cout << "In Front: " << dq1.front() << endl;
    cout << "In Back: " << dq1.back() << endl;
    cout << "Recent Size: " << dq1.size() << endl;

    dq1.pop_back();
    cout << "In Front: " << dq1.front() << endl;
    cout << "In Back: " << dq1.back() << endl;
    cout << "Recent Size: " << dq1.size() << endl;

    dq1.pop_front();
    cout << "In Front: " << dq1.front() << endl;
    cout << "In Back: " << dq1.back() << endl;
    cout << "Recent Size: " << dq1.size() << endl;

    Deque<char> dq2;

    dq2.push_back('r');
    dq2.push_back('a');
    dq2.push_back('h');
    cout << "In Front: " << dq2.front() << endl;
    cout << "In Back: " << dq2.back() << endl;
    cout << "Recent Size: " << dq2.size() << endl;

    dq2.push_front('i');
    dq2.push_front('m');
    cout << "In Front: " << dq2.front() << endl;
    cout << "In Back: " << dq2.back() << endl;
    cout << "Recent Size: " << dq2.size() << endl;

    dq2.pop_back();
    cout << "In Front: " << dq2.front() << endl;
    cout << "In Back: " << dq2.back() << endl;
    cout << "Recent Size: " << dq2.size() << endl;

    dq2.pop_front();
    cout << "In Front: " << dq2.front() << endl;
    cout << "In Back: " << dq2.back() << endl;
    cout << "Recent Size: " << dq2.size() << endl;

    return 0;
}
