#include <iostream>
#include "Node.cpp"
using namespace std;

void printIthNode(Node *head, int i)
{
    // Write your code here
    if (i == 0)
    {
        cout << " ";
        return;
    }
    int count = 0;
    while (count != i && head != NULL)
    {
        count++;
        head = head->next;
    }
    if (head == NULL)
        return;
    cout << head->data;
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
        int pos;
        cin >> pos;
        printIthNode(head, pos);
        cout << endl;
    }
    return 0;
}