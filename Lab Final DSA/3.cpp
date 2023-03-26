#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *nxt;
    Node *prv;
};

class LinkedList
{
private:
    Node *head;
    Node *tail;

    Node *createNewNode(int value)
    {
        Node *newnode = new Node;
        newnode->data = value;
        newnode->nxt = NULL;
        newnode->prv = NULL;

        return newnode;
    }

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void insertHead(int value)
    {
        Node *newNode = createNewNode(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;

            return;
        }

        Node *temp = head;
        head = newNode;
        head->nxt = temp;
        temp->prv = head;
    }

    void insertTail(int value)
    {
        Node *newNode = createNewNode(value);
        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;

            return;
        }

        Node *temp = tail;
        tail = newNode;
        tail->prv = temp;
        temp->nxt = tail;
    }

    void insertMid(int value)
    {
        Node *newNode = createNewNode(value);
        if (!head)
        {
            head = newNode;
            tail = newNode;
        }
        else if (head == tail)
        {
            tail = newNode;
            head->nxt = tail;
            tail->prv = head;
        }
        else
        {
            Node *mid = head;
            Node *last = head->nxt;
            while (last && last->nxt)
            {
                mid = mid->nxt;
                last = last->nxt->nxt;
            }
            Node *after = mid->nxt;
            newNode->nxt = after;
            after->prv = newNode;
            newNode->prv = mid;
            mid->nxt = newNode;
        }
    }

    void print()
    {
        Node *a = head;
        while (a)
        {
            cout << a->data << " ";
            a = a->nxt;
        }
        cout << endl;
    }

    void Merge(LinkedList a)
    {
        if (a.head == NULL)
        {
            return;
        }
        if (head == NULL)
        {
            head = a.head;
            tail = a.tail;
        }
        else
        {
            tail->nxt = a.head;
            a.head->prv = tail;
            tail = a.tail;
        }
        a.head = NULL;
        a.tail = NULL;
    }
};

int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.Merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100

    return 0;
}
