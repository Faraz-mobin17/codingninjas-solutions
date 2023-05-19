#include <iostream>
#include "Node.h"
using namespace std;

int length(Node *head)
{
    // Write your code here
    Node *temp = head;
    int count = 0;
    while (temp != NULL && temp->data != -1)
    {
        temp = temp->next;
        count++;
    }
    return count;
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
        cout << length(head) << endl;
    }

    return 0;
}