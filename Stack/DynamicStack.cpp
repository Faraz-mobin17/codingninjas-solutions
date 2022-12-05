#include <iostream>
using namespace std;

class Stack
{
    int *data;
    int nextIndex;
    int capacity;

public:
    Stack()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
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
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i += 1)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete[] data;
            data = newData;
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
