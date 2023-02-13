#include <bits/stdc++.h>
using namespace std;

// queue using singly linkedlist

class node
{
public:
    int data;
    node *nxt;
};

class Queue
{
public:
    node *head;
    node *tail;
    int sz;
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node *CreateNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void enqueue(int value)
    {
        sz++;
        node *newnode = CreateNode(value);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->nxt = newnode;
        tail = newnode;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Empty Queue!" << endl;
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
        node *a = head;
        head = head->nxt;
        sz--;
        delete a;
    }
    int frontvalue()
    {
        if (sz == 0)
        {
            cout << "Queue Empty" << endl;
            return -1;
        }
        return head->data;
    }
    int size()
    {
        return sz;
    }
};

int main()
{
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);

    cout << "Queue Size: " << q.size() << endl;
    cout << q.frontvalue() << endl;
    q.dequeue();
    
    cout << q.frontvalue() << endl;

    return 0;
}