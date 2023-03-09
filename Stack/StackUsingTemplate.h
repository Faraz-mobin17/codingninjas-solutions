#include <iostream>
using namespace std;
template <typename T>
class StackUsingTemplate
{
    T *data;
    int nextIndex;
    int capacity;

public:
    StackUsingTemplate()
    {
        data = new T[5];
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
    void push(T value)
    {
        if (isFull())
        {
            T *newData = new T[2 * capacity];
            for (auto i = 0; i < capacity; i += 1)
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
    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }
    T top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return 0;
        }
        return data[nextIndex - 1];
    }
};
