template <typename T>
class DynamicQueue
{
    T *queue;
    int size, firstIndex, nextIndex, capacity;

public:
    DynamicQueue(int size)
    {
        queue = new T[size];
        size = 0;
        capacity = size;
        firstIndex = -1;
        nextIndex = 0;
    }
    bool isFull() { return size == capacity; }
    bool isEmpty() { return size == 0; }
    int getSize() { return size; }
    void enqueue(T element)
    {
        if (isFull())
        {
            cout << "Queue is Full\n";
            int j = 0;
            T *newQueue = new T[2 * capacity];
            // now copy all the elements from frontIndex to capacity
            for (int i = firstIndex; i < capacity; i += 1)
            {
                newQueue[j++] = queue[i];
            }
            // now copy all the elements from 0 to firstIndex
            for (int i = 0; i < firstIndex; i += 1)
            {
                newQueue[j++] = queue[i];
            }
            delete[] queue;
            queue = newQueue;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        queue[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1)
            firstIndex = 0;
        size++;
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
            return 0;
        }
        T poppedValue = queue[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0)
        {
            firstIndex = -1;
            nextIndex = 0;
        }
        return poppedValue;
    }
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return 0;
        }
        return queue[firstIndex];
    }
};
