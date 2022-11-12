#include <iostream>
#include "Node.cpp"
using namespace std;

int length(Node *head)
{
    Node *temp = head;
    int count;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

Node *deleteNode(Node *head, int pos)
{
    // Write your code here
    if (head == NULL)
        return head;
    if (pos == 0)
        return head->next;
    Node *temp = head;
    int currentPos = 0;
    while (temp != NULL && currentPos < pos - 1)
    {
        ++currentPos;
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL)
        return head;
    temp->next = temp->next->next;
    return head;
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        int pos;
        cin >> pos;
        head = deleteNode(head, pos);
        print(head);
    }

    return 0;
}