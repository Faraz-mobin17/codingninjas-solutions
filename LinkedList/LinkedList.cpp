#include<iostream>
using namespace std;
#include "Node.h"
Node* takeInput() {
	int data;
	cin >> data;
	Node* head = NULL;
	Node* tail = NULL;
	while (data != -1) {
		Node* newNode = new Node(data);
		if (head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else 
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
}
void print(Node* head) {

	Node* tmp = head;
	while (tmp != NULL) {
		cout << "data: " << tmp->data << " ";
		tmp = tmp->next;
	}

	// while (head != NULL) {
	// 	cout << "data: " << head->data << " ";
	// 	head = head->next;
	// }
}
int main() {
	// statiscally 
	// address of n1
	Node n1(1);
	Node* head = &n1;
	Node n2(2);
	Node n3(3);
	Node n4(4);
	Node n5(5);
	n1.next = &n2;
	n2.next = &n3;
	n3.next = &n4;
	n4.next = &n5;
	print(head);
	// print(head);
	// n1.next = &n2;
	// // cout << n1.data << " " << n2.data << endl;
	// cout << head->data << endl;
	// while (head->next != NULL) {
	// 	cout << head -> data << endl;
	// 	head = head -> next;
	// }
	// dynamically
	// Node* n3 = new Node(10);
	// Node* head = n3;
	// Node* n4 = new Node(20);
	// n3 -> next = n4;
	return 0;
}
