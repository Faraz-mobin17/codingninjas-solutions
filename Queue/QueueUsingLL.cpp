#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class QueueUsingLL
{
    Node *head, *tail;
    int size;

public:
    QueueUsingLL()
    {
        size = 0;
        head = tail = NULL;
    }
    int getSize() { return size; }
    bool isEmpty()
    {
        return size == 0;
    }

    void enqueue(int element)
    {
        size++;
        Node *newNode = new Node(element);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            return -1;
        }
        int ans = head->data;
        Node *tempNode = head;
        head = head->next;
        delete tempNode;
        size--;
        return ans;
    }
    int front()
    {
        if (isEmpty())
        {
            return -1;
        }
        return head->data;
    }
    // Implement the front() function
};

int main(int argc, char const *argv[])
{
    QueueUsingLL *q = new QueueUsingLL();
    return 0;
}