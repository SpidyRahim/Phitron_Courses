#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

class CircularQueue
{
public:
    int *a;
    int array_cap;
    int l, r;
    int sz;
    CircularQueue()
    {
        a = new int[1];
        array_cap = 1;
        l = 0;
        r = -1;
        sz = 0;
    }

    void increase_size()
    {
        
    }

    void enqueue(int value)
    {
        if (sz == MAX_SIZE)
        {
            cout << "Queue Is Full!" << endl;
            return;
        }
        r++;
        if (r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }

    void dequeue()
    {
        if (sz == 0)
        {
            cout << "Queue Is Empty!" << endl;
            return;
        }

        l++;

        if (l == MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }

    int front()
    {
        if (sz == 0)
        {
            cout << "Queue Is Empty!" << endl;
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    CircularQueue cq;
    cq.enqueue(5);
    cq.enqueue(10);
    cq.enqueue(15);
    cout << cq.front() << endl;
    cout << cq.size() << endl;

}