#include <bits/stdc++.h>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *nxt;
};

template <class T>
class LinkedList
{
public:
    node<T> *head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz = 0;
    }

    // Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        return newnode;
    }

    // Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if (head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        head = newnode;
    }

    // Deletes the value at head. O(1)
    void DeleteAtHead()
    {
        if (head == NULL)
        {
            return;
        }
        node<T> *a = head;
        node<T> *b = head->nxt;
        delete a;
        head = b;
        sz--;
    }
    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

// Stack using linked list
template <class T>
class Stack
{
public:
    LinkedList<T> ll;

    Stack()
    {
    }

    T top()
    {
        if (ll.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            T a;
            return a;
        }
        return ll.head->data;
    }

    void push(T val)
    {
        ll.InsertAtHead(val);
    }

    void pop()
    {
        if (ll.getSize() == 0)
        {
            cout << "Stack is empty!\n";
            return;
        }
        ll.DeleteAtHead();
    }
};

int main()
{
    Stack<double> st;
    st.push(3.5);
    st.push(3.6);
    st.push(7.8);
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";

    Stack<char> st2;
    st2.push('a');
    st2.push('g');
    st2.push('u');
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    st2.pop();
    cout << st2.top() << "\n";
    return 0;
}