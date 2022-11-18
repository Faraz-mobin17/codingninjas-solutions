#include <iostream>
#include "Node.cpp"
#define null NULL
using namespace std;
Node *removeDuplicates(Node *head)
{
    // Write your code here
    // if ll is empty
    if (head == null)
    {
        return head;
    }
    Node *current = head;
    while (current->next != null)
    {
        if (current->data == current->next->data)
        {
            Node *next_next = current->next->next;
            Node *nodeToDelete = current->next;
            delete (nodeToDelete);
            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }
    return head;
}
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
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
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}