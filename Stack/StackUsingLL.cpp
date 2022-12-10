#include <iostream>
#include "DynamicNode.h"
using namespace std;
template <typename T>
class Stack
{
    Node<T> *head;
    int size; // number of elements present in the stack
public:
    Stack()
    {
        head = NULL;
        size = 0;
    }
    int getSize()
    {

        return size;
    }
    bool isEmpty()
    {
        // Implement the isEmpty() function
        if (head == NULL)
        {
            cout << "Stack is empty\n";
            return head;
        }
    }

    void push(T element)
    {
        // Implement the push() function
        Node<T> *newNode = new Node(element);
        newNode->next = head;
        head = newNode;
    }
    T pop()
    {
        // Implement the pop() function
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *tmpNode = temp->next;
        temp->next = NULL;
        delete tmpNode;
    }

    T top()
    {
        // Implement the top() function
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        cout << "Last Element: " << temp->data;
    }
};

int main()
{
    Stack<int> st;

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
            cout << st.getSize() << "\n";
            break;
        default:
            cout << ((st.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}
