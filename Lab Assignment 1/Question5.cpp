#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head;
    int size = 0;

    Node *createNewNode(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
    }

    void print(Node *a)
    {
        if (a == NULL)
            return;

        print(a->next);
        cout << a->data << " ";
    }

public:
    LinkedList()
    {
        head = NULL;
    }

    void InsertAtHead(int value)
    {
        Node *a = createNewNode(value);

        if (head == NULL)
        {
            head = a;
        }
        else
        {
            a->next = head;
            head = a;
        }
        size++;
    }

    int getSize()
    {
        return size;
    }

    int getValue(int index)
    {
        Node *a = head;
        int i = 0;

        while (a != NULL)
        {
            if (i == index)
            {
                return a->data;
            }
            else
            {
                a = a->next;
                i++;
            }
        }
        return -1;
    }

    void printReverse()
    {
        print(head);
        cout << "\n";
    }

    void swapFirst()
    {
        if (head->next == NULL)
            return;

        int first = head->data;
        head->data = head->next->data;
        head->next->data = first;
    }

    void Traverse()
    {
        Node *a = head;
        while (a != NULL)
        {
            cout << a->data << " ";

            a = a->next;
        }
        cout << "\n";
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    LinkedList l;
    cout << l.getSize() << "\n";
    l.InsertAtHead(5);
    cout << l.getSize() << "\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout << l.getSize() << "\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout << l.getValue(2) << "\n";

    cout << l.getValue(6) << "\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}