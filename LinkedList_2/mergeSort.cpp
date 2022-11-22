#include <iostream>
#include "Node.cpp"
using namespace std;
Node *merge(Node *head1, Node *head2)
{
    Node *fh = NULL, *ft = NULL;
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    // loop
    while (head1 != NULL && head2 != NULL)
    {
        // inserting first node in a list
        if (fh == NULL && ft == NULL)
        {
            if (head1->data <= head2->data)
            {
                fh = head1;
                ft = head1;
                head1 = head1->next;
            }
            else
            {
                fh = head2;
                ft = head2;
                head2 = head2->next;
            }
        }
        // inserting the second node in a list
        else
        {
            if (head1->data <= head2->data)
            {
                ft->next = head1;
                ft = ft->next;
                head1 = head1->next;
            }
            else
            {
                ft->next = head2;
                ft = ft->next;
                head2 = head2->next;
            }
        }
    }

    if (head1 != NULL)
        ft->next = head1;
    if (head2 != NULL)
        ft->next = head2;
    return fh;
}
Node *getMid(Node *head)
{
    Node *fast = head->next;
    Node *slow = head;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node *mergeSort(Node *head)
{
    // Write your code here
    // base condition
    if (head == NULL || head->next == NULL)
        return head;
    Node *mid = getMid(head);
    Node *firstPart = head;
    Node *secondPart = mid->next;
    mid->next = NULL;
    Node *newFirstHead = mergeSort(firstPart);
    Node *newSecondHead = mergeSort(secondPart);
    return merge(newFirstHead, newSecondHead);
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
        head = mergeSort(head);
        print(head);
    }

    return 0;
}