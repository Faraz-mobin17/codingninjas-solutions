#include <iostream>
#include "Node.h"

using namespace std;
Node *appendLastNToFirst(Node *head, int n)
{

    if (n == 0 || head == nullptr)
    {
        return head;
    }
    Node *fast = head;
    Node *slow = head;
    Node *inithead = head;

    for (int i = 0; i < n; i += 1)
        fast = fast->next;
    while (fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;
    }
    Node *temp = slow->next;
    slow->next = nullptr;
    fast->next = inithead;
    head = temp;
    return head;
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = nullptr, *tail = nullptr;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == nullptr)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
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
        int n;
        cin >> n;
        head = appendLastNToFirst(head, n);
        print(head);
    }
    return 0;
}