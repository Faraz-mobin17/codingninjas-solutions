template <typename T>
class QueueUsingArray
{
	T *data;
	int nextIndex;
	int size;
	int firstIndex;
	int capacity;

public:
	QueueUsingArray(int s)
	{
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
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

		data[nextIndex] = element;
		nextIndex = (nextIndex + 1) % capacity;
		if (firstIndex == -1)
		{
			firstIndex = 0;
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
		return data[firstIndex];
	}
	T dequeue()
	{
		if (isEmpty())
		{
			cout << "Queue is empty: \n";
			return 0;
		}
		T ans = data[firstIndex];
		firstIndex = (firstIndex + 1) % capacity;
		size--;
		if (size == 0)
		{
			firstIndex = -1;
			nextIndex = 0;
		}
		return ans;
	}
};