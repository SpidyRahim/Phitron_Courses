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
    node *head; // prothom head node track kortesi
    int sz;     // set the variable as size of the linked list

    LinkedList()
    {
        head = NULL;
        sz = 0; // shurutei linked list er size 0 hisebe dhore nilam
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
        sz++; // jokhon e linked list e value insetr hobe tokhon e 1 1 kore barbe
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
    int SearchDistinctValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }
    // search all possible occurrences
    void SearchAllValue(int value)
    {
        node *a = head;
        int index = 0;
        while (a != NULL)
        {
            if (a->data == value)
            {
                cout << value << " is found at index " << index << endl;
            }
            a = a->nxt;
            index++;
        }
    }

    // counting the size of the linked list
    int getSize()
    {
        return sz;
    }

    void InsertAtAnyPosition(int index, int value) // duita perameter karon index ta k\hocche kothay indert korbe ar value ta hocche kon value k insert korbe seta bujhano hoye hoyeche
    {
        if (index < 0 || index > sz)
        {
            return;
        }

        if (index == 0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }

        node *newnode = CreateNewNode(value); // notun node create korbo
        newnode->nxt = a->nxt;                // notun node er next pointer ta hobe agey j a point kore chilo je node e sei node tai hobe ekhon notu n kore pointer of newnode
        a->nxt = newnode;                     // a er next pointer ta hobe newnode er dike locate kora
    }

    void DeleteHead()
    {
        if (head == NULL)
        {
            return;
        }
        sz--;

        node *a = head; // head e point kore ache
        head = a->nxt;  // bollam tumi porer head ta point koro;
        delete a;       // delete kore dilam
    }

    void DeleteAnyIndex(int index)
    {
        if (index < 0 || index > sz - 1)
        {
            return;
        }
        if (index == 0)
        {
            DeleteHead();
            return;
        }
        sz--;

        node *a = head; // head e point korechi
        int cur_index = 0;
        while (cur_index != index - 1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

    void InsertAfterValue(int value, int data)
    {
        node *a = head;

        while (a != NULL)
        {
            if (a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if (a == NULL)
        {
            cout << value << " doesn't exist \n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data); /// ekhane ami notun node create korlam
        newnode->nxt = a->nxt;               // notun node er next ta hobe a node er next
        a->nxt = newnode;                    // a node er next ta jehetu notunnode niy nise tai ekhon e node er next ta hobe notun node
    }

    void ReversePrint(node *a) // full node ta nibe
    {
        if (a == NULL)
            return;
        ReversePrint(a->nxt);
        cout << a->data << " ";
    }
    void Reverse()
    {
        ReversePrint(head);
        cout << endl;
    }
};

int main()
{
    LinkedList l;

    /* l.Traverse(); // prothomei null karon kichui nai

    l.InsertAtHead(10); // 10 insert korlam
    l.Traverse();       // tai 10 print hobe

    l.InsertAtHead(30); // 30 insert korlam head e
    l.Traverse();       // tai 30 10 evabe print hobe

    l.InsertAtHead(20); // 20 insert korlam head e
    l.Traverse();       // tai 20 30 10 evabe print hobe

    l.InsertAtHead(30); // 30 insert korlam head e
    l.Traverse();       // tai 30 20 30 10 evabe print hobe

    l.SearchDistinctValue(10);
    l.SearchDistinctValue(5);
    cout << endl;
    cout << endl;
    cout << endl;

    l.SearchAllValue(30);
    cout << endl;
    cout << endl;
    cout << endl; */

    /*
    cout << "Size of the Linked List is " << l.getSize() << endl;
    l.InsertAtHead(10);
    l.Traverse();
    cout << "Size of the Linked List is " << l.getSize() << endl;

    l.InsertAtHead(5);
    l.Traverse();
    cout << "Size of the Linked List is " << l.getSize() << endl;

    l.InsertAtHead(6);
    l.Traverse();
    cout << "Size of the Linked List is " << l.getSize() << endl;

    // l.Traverse();
    l.InsertAtAnyPosition(1, 100);
    l.Traverse();
    cout << "Size of the Linked List is " << l.getSize() << endl;

    l.DeleteHead();
    l.Traverse();
    cout << l.getSize() << endl;

    l.DeleteAnyIndex(2);
    l.Traverse();
    cout << "Size of the Linked List is " << l.getSize() << endl;
 */

    /* l.InsertAtHead(30);
    l.InsertAtHead(6);
    l.InsertAtHead(10);
    l.Traverse();

    cout << "The size of the linekdlist is " << l.getSize() << endl;

    l.InsertAfterValue(10, 100);

    l.Traverse();
    cout << "The size of the linekdlist is " << l.getSize() << endl;
    */

    l.InsertAtHead(30);
    l.InsertAtHead(6);
    l.InsertAtHead(10);
    l.InsertAtHead(1);

    l.Traverse();

    l.Reverse();
    
    l.Traverse();

    return 0;
}