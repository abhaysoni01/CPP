#include <iostream>
using namespace std;
class queue
{
    int *arr;
    int capacity;
    int currSize;
    int f, r;

public:
    queue(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        currSize = 0;
        f = 0;
        r = -1;
    }
    void push(int data)
    {
        if (currSize == capacity)
        {
            cout << "Queue is full\n";
            return;
        }
        r = (r + 1) % capacity;
        arr[r] = data;
        currSize++;
    }
    void pop()
    {
        if (empty())
        {
            cout << "Queue is empty.\n";
            return;
        }
        f = (f + 1) % capacity;
        currSize--;
    }
    int front()
    {
        if (empty())
        {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[f];
    }
    bool empty()
    {
        return currSize == 0;
    }
};
int main()
{
    queue q1(10);
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout << q1.front() << endl;  

    q1.pop();
    q1.pop();

    q1.pop();
    cout << q1.front() << endl;

    return 0;
}