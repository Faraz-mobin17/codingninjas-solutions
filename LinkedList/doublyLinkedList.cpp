#include <iostream>
#include "Doubly.h"
using namespace std;

Node* insertAtFirst(Node* head, int data) 
{
    Node* newNode = new Node(data);
    if (head == NULL) { 
        newNode->prev = NULL;
        newNode->next = head;   
    }
    return head;
}

void printNode(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << "Data: " << temp->data << "\n";
        temp = temp -> next;
    }
}

int getLength(Node* head){ 
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp -> next;
        ++count;
    }
    return count;
}

void insertAtFirst(Node* &head, int data) 
{
    Node* newNode = new Node(data);
    newNode -> next = head;
    head -> prev = newNode;
    head = newNode; 
}

void insertAtTail(Node* &tail, int data) {
    Node* newNode = new Node(data);
    tail -> next = newNode;
    newNode -> prev = tail;
    tail = newNode;
}

int main(int argc, char const *argv[])
{
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);
    Node* fourthNode = new Node(40);
    Node* fifthNode = new Node(50);
    Node* head = firstNode;
    Node* tail = firstNode;
    printNode(head);
    cout << getLength(head);
    return 0;
}