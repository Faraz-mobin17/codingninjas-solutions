#include <iostream>
using namespace std;
#include "Node.h"

Node *takeInput_Better()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
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
            tail = tail->next;
            // OR
            // tail = newNode;
        }

        cin >> data;
    }
    return head;
}

Node *insertAtBeg(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == nullptr)
    {
        head = newNode;
        return head;
    }
    newNode->next = head;
    head = newNode;
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
}

int main()
{

    Node *head = takeInput_Better();
    print(head);
    int data;
    cin >> data;
    head = insertAtBeg(head, data);
    print(head);
}
