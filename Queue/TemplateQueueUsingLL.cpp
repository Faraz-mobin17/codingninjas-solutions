#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>
class QueueUsingLinkedList
{
    Node<T> *head, *tail;
    int size;

public:
    QueueUsingLinkedList()
    {
        size = 0;
        head = tail = NULL;
    }
    int getSize() { return size; }
    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        size++;
    }
    T dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return 0;
        }
        T ans = head->data;
        Node<T> *tempNode = head;
        head = head->next;
        delete tempNode;
        size--;
        return ans;
    }
    T front()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty\n";
            return 0;
        }
        return head->data;
    }
};

int main()
{
    QueueUsingLinkedList<int> ql;
    ql.enqueue(10);
    ql.enqueue(20);
    ql.enqueue(30);
    ql.enqueue(40);
    ql.enqueue(50);
    ql.enqueue(60);
    cout << ql.front() << endl;
    cout << ql.dequeue() << endl;
    cout << ql.dequeue() << endl;
    cout << ql.dequeue() << endl;
    cout << ql.getSize() << endl;
    cout << ql.isEmpty() << endl;
    cout << ql.front();
    return 0;
}