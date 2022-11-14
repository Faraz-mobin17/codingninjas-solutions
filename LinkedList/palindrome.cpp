#include <iostream>
#include "Node.cpp"
using namespace std;
Node *getMiddle(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
Node *reverse(Node *head)
{
    // write code here
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return 1;
    Node *mid = getMiddle(head);
    Node *last = reverse(mid->next);
    Node *current = head;
    while (last != NULL)
    {
        if (current->data != last->data)
        {
            return 0;
        }
        last = last->next;
        current = current->next;
    }
    return 1;
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

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        bool ans = isPalindrome(head);

        if (ans)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }

    return 0;
}