#include <iostream>
using namespace std;

class Stack
{
    int *data;
    int nextIndex;
    int capacity;

public:
    Stack(int totalSize)
    {
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    int size()
    {
        return nextIndex;
    }
    bool isEmpty()
    {
        return nextIndex == 0;
    }
    bool isFull()
    {
        if (nextIndex == capacity)
        {
            cout << "Stack is Full " << endl;
            return true;
        }
        return false;
    }
    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack is full\n";
            return;
        }
        data[nextIndex] = value;
        nextIndex++;
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return -1;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        return data[nextIndex - 1];
    }
};
