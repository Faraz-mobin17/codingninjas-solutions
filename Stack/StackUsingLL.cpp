#include <iostream>
#include "Node.h"
using namespace std;
class Stack
{
    Node *head;
    static int length; // number of elements present in the stack
public:
    Stack()
    {
        head = NULL;
        length = 0;
    }
    int getlength() { return length; }
    bool isEmpty()
    {
        // Implement the isEmpty() function
        return length == 0;
    }

    void push(int element)
    {
        // Implement the push() function
        Node *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        length++;
    }
    int pop()
    {
        // Implement the pop() function
        if (isEmpty())
            return -1;
        int ans = head->data;
        Node *temp = head;
        head = head->next;
        delete temp;
        length--;
        return ans;
    }

    int top()
    {
        // Implement the top() function
        if (isEmpty())
            return -1;
        return head->data;
    }
};

int main()
{
    Stack st;

    int q;
    cin >> q;

    while (q--)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            st.push(input);
            break;
        case 2:
            cout << st.pop() << "\n";
            break;
        case 3:
            cout << st.top() << "\n";
            break;
        case 4:
            cout << st.getlength() << "\n";
            break;
        default:
            cout << ((st.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}