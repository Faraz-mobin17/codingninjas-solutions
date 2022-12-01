#include <iostream>
#include "Node.cpp"
using namespace std;

Node *skipMdeleteN(Node *head, int M, int N)
{
    Node *current = head, *t;
    int count;
    if (head == NULL || M == 0)
        return NULL;
    if (N == 0)
        return head;
    // The main loop that traverses
    // through the whole list
    while (current)
    {
        // Skip M nodes
        for (count = 1; count < M &&
                        current != NULL;
             count++)
            current = current->next;

        // If we reached end of list, then return
        if (current == NULL)
            return head;

        // Start from next node and delete N nodes
        t = current->next;
        for (count = 1; count <= N && t != NULL; count++)
        {
            Node *temp = t;
            t = t->next;
            delete temp;
        }

        // Link the previous list with remaining nodes
        current->next = t;

        // Set currentent pointer for next iteration
        current = t;
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
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}