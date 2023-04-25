
class Stack
{
    char *data;
    int nextIndex;
    int capacity;

public:
    Stack(int totalSize)
    {
        data = new char[totalSize];
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
    void push(char value) {
        if (isFull())
        {
            cout << "Stack is full\n";
            return;
        }
        data[nextIndex] = value;
        nextIndex++;
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return '\0';
        }
        nextIndex--;
        return data[nextIndex];
    }
    char top()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty\n";
            return '\0'; 
        }
        return data[nextIndex - 1];
    }
};
