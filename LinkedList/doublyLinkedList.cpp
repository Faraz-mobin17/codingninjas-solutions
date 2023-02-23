#include <iostream>
#include "Doubly.h"
using namespace std;

void insertAtHead(Node* &head,Node* &tail, int data) 
{
    Node* node = new Node(data);
    if (head == NULL) 
    {
        head = tail = node;
    }
    else 
    {    
        node -> next = head;
        node -> prev = head;
        head = node;
    }
}

void insertAtTail(Node* &head,Node* &tail, int data) 
{
    Node* node = new Node(data);
    if (tail == NULL) 
    {
         head = tail = node;
    }
    else 
    {       
        tail -> next = node;
        node -> prev = tail;
        tail = node;
    }
}
void insertAtPos(Node* &head,Node* &tail,int position,int data) 
{
    
    // inserting node at first position
    if (position == 1) 
    {
        insertAtHead(head,tail,data);
        return;
    }

    Node* node = head;
    int count = 1;
    // insert at specific position
    while (node != NULL && count < position - 1) 
    {
        node = node -> next;
        count++;
    }
    // insert at end
    if (node -> next == NULL) 
    {
        insertAtTail(head,tail,data);
        return;
    }

    Node* newNode = new Node(data);
    newNode -> next = node -> next;
    node -> next = newNode; 
    node -> next -> prev = newNode;
    newNode -> prev = node;
}

void deleteNode(Node* &head, int position) 
{
    // to delete first node or start node
    if (position == 1) 
    {
        Node* temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else 
    {
        // delete some other node in the list 
        Node* current = head;
        Node* prev = NULL;
        int count = 1;
        while (count < position)
        {
            prev = current;
            current = current -> next;
            count++;
        }
        current -> prev = NULL;
        prev -> next = current -> next;
        current -> next = NULL;
        delete current;
    }
}

void printNode(Node* head) 
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout  << temp->data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int getLength(Node* head)
{
    int count = 0;
    Node* temp = head;
    while (temp != NULL) 
    {
        temp = temp -> next;
        ++count;
    }
    return count;
}

int main(int argc, char const *argv[])
{
    // Node* node = new Node(0);
    // Node* head = node;
    // Node* tail = node;
    Node* head = NULL;
    Node* tail = NULL;
    printNode(head);

    insertAtHead(head,tail,11);
    printNode(head);

    insertAtHead(head,tail,13);
    printNode(head);

    insertAtHead(head,tail,8);
    printNode(head);

    insertAtHead(head,tail,25);
    printNode(head);

    insertAtPos(head,tail,2,100);
    printNode(head);


    cout << endl;
    return 0;
}