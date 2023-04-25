#include <iostream>
#include "DynamicNode.h"
using namespace std;
template <typename T>
/*
* we are not maintaining the tail pointer because we are pushing at first so that
* pop() time complexity can become O(1)
*/
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
        return size == 0;
    }

    void push(T element)
    {
        // Implement the push() function
        Node<T> *newNode = new Node<T>(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    T pop()
    {
        // Implement the pop() function
        if (isEmpty())
            return size;
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T top()
    {
        // Implement the top() function
        if (isEmpty())
            return size;
        return head->data;
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
