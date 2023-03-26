#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 100;

class Queue
{
private:
    int arr[MAX_SIZE];
    int front_index, back_index;

public:
    Queue()
    {
        front_index = -1;
        back_index = -1;
    }

    void enqueue(int value)
    {
        if (back_index > MAX_SIZE - 1)
        {
            cout << "Queue is full !!" << endl;
            return;
        }
        if (front_index == -1)
        {
            front_index = 0;
        }
        arr[++back_index] = value;
    }

    void dequeue()
    {
        if (front_index == -1)
        {
            cout << "Queue is empty !!!" << endl;
            return;
        }
        if (front_index == back_index)
        {
            front_index = -1;
            back_index = -1;
        }
        else
        {
            front_index++;
        }
    }

    int front()
    {
        if (front_index == -1)
        {
            cout << "Queue is empty !!!" << endl;
            return -1;
        }
        return arr[front_index];
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout << "In Front : " << q.front() << "\n";
    q.dequeue();
    cout << "In Front : " << q.front() << "\n";
    q.dequeue();
    cout << "In Front : " << q.front() << "\n";
    q.dequeue();
    cout << "In Front : " << q.front() << "\n";
    q.dequeue();
    cout << "In Front : " << q.front() << "\n";
    return 0;
}