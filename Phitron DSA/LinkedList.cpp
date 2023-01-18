#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *nxt;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = NULL;
    }
    // Create a new node with data = value and nxt = NULL
    node *CreateNewNode(int value)
    {
        // shurutei node create kore felbo
        node *newNode = new node;
        newNode->data = value; // notun node ta value rakhtese
        newNode->nxt = NULL;   // rakhar por Null e point kore ache karon ekhon amra just ekta e create korechi
        return newNode;        // notun node ta return kore dibo
    }

    // Insert new value at head
    void InsertAtHead(int value)
    {
        node *a = CreateNewNode(value);
        if (head == NULL)
        {
            head = a; // jodi head null hoy tahole j node ache ta point kore felbe
        }
        else
        {
            a->nxt = head; // notun create kora node ta ekhon kar head e point korbe
            head = a;      // ar notun crate kora node ta ke amra head baniye frltesi
        }
    }
    // Prints LinkedList
    void Traverse()
    {
        node *a = head; // prothomei head k point kore dicchi
        while (a != NULL)
        {
            cout << a->data << " -> ";
            a = a->nxt;
        }
        cout << "NULL";
        cout << endl;
    }
    // search a single value
    void SearchDistinctValue(int value)
    {
    }
    // search all possible occurrences
    void SearchAllValue(int value)
    {
    }
};

int main()
{
    LinkedList l;

    l.Traverse(); // prothomei null

    l.InsertAtHead(10); // 10 insert korlam
    l.Traverse();       // tai 10 print hobe

    l.InsertAtHead(30); // 30 insert korlam
    l.Traverse();       // tai 30 10 evabe print hobe

    l.InsertAtHead(20); // 20 insert korlam
    l.Traverse();       // tai 20 30 10 evabe print hobe

    l.InsertAtHead(30); // 30 insert korlam
    l.Traverse();       // tai 30 20 30 10 evabe print hobe

    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);

    l.SearchAllValue(30);
    return 0;
}