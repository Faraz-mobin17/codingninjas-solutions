#include <iostream>
#include "Node.cpp"
#include "Pair.cpp"
using namespace std;
// TC O(n)
Node *reverseLinkedListRec_best(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *smallAns = reverseLinkedListRec_best(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return smallAns;
}
// this solution is used to show how we can return multiple params from function. TC =  O(n)
Pair reverseLinkedListRec_better(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }
    Pair smallAns = reverseLinkedListRec_better(head->next);
    smallAns.tail->next = head;
    head->next = NULL;
    Pair ans;
    ans.head = smallAns.head;
    ans.tail = head;
    return ans;
}

Node *reverseLL_better(Node *head)
{
    return reverseLinkedListRec_better(head).head;
}
// TC = O(n^2)
Node *reverseLinkedListRec(Node *head)
{
    // Write your code here
    if (head == NULL || head->next == NULL)
        return head;
    Node *smallAns = reverseLinkedListRec(head->next);
    Node *temp = smallAns;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = head;
    head->next = NULL;
    return smallAns;
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
        // head = reverseLinkedListRec(head);
        // head = reverseLL_better(head);
        head = reverseLinkedListRec_best(head);
        print(head);
    }

    return 0;
}