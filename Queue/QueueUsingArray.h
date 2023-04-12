template <typename T>
class QueueUsingArray
{
	T *data;
	int front, rear, size, capacity;

public:
	QueueUsingArray(int s)
	{
		data = new T[s];
		rear = 0;
		front = -1;
		size = 0;
		capacity = s;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	bool isFull() { return size == capacity; }
	// insert an element
	void enqueue(T element)
	{
		if (isFull())
		{
			cout << "Queue is Full\n";
			return;
		}

		data[rear] = element;
		rear = (rear + 1) % capacity;
		if (front == -1)
		{
			front = 0;
		}
		size++;
	}
	T front()
	{
		if (isEmpty())
		{
			cout << "Queue is empty: \n";
			return 0;
		}
		return data[front];
	}
	T dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty: \n";
			return 0;
		}
		T ans = data[front];
		front = (front + 1) % capacity;
		size--;
		if (size == 0)
		{
			front = -1;
			rear = 0;
		}
		return ans;
	}
};