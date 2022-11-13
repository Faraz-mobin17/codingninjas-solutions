#include <iostream>
#include "Node.cpp"
using namespace std;

int findNode(Node *head, int n)
{
    // Write your code here.
    int idx = 0;
    Node *temp = head;
    while (temp != NULL && temp->data != n)
    {
        temp = temp->next;
        ++idx;
    }
    if (temp == NULL)
    {
        return -1;
    }
    return idx;
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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int val;
        cin >> val;
        cout << findNode(head, val) << endl;
    }
}