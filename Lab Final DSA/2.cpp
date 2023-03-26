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
};

int main()
{

    LinkedList dl;

    dl.insertHead(999);
    dl.insertHead(99);
    dl.insertHead(9);

    dl.insertTail(111);
    dl.insertTail(11);

    dl.insertMid(100);

    dl.print();

    return 0;
}
