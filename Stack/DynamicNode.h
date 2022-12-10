template <typename T>

class Node
{
	T data;
	Node<T> *next;
	Node(T data)
	{
		this->data = data;
		this->next = NULL;
	}
};
