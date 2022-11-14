#include <iostream>
#include <vector>
#include "Node.cpp"
using namespace std;
bool checkPalindrome(vector<int> arr)
{
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        if (arr[start] != arr[end])
        {

            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
bool isPalindrome(Node *head)
{
    if (head == NULL)
        return 1;
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
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