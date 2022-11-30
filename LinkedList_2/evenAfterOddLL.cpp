#include <iostream>
#include "Node.cpp"
using namespace std;

Node *evenAfterOdd(Node *head)
{

	Node *evenHead = NULL, *evenTail = NULL;
	Node *oddHead = NULL, *oddTail = NULL;

	while (head != NULL)
	{
		// if the data is even
		if (head->data % 2 == 0)
		{
			// if the data is first node
			if (evenHead == NULL)
			{
				evenHead = evenTail = head;
				head = head->next;
			}
			// if not first node
			else
			{
				evenTail->next = head;
				evenTail = evenTail->next;
				head = head->next;
			}
		}
		// if the data is odd
		else
		{
			// if the data is first node
			if (oddHead == NULL)
			{
				oddHead = oddTail = head;
				head = head->next;
			}
			// if not the first node
			else
			{
				oddTail->next = head;
				oddTail = oddTail->next;
				head = head->next;
			}
		}
	}
	if (evenHead == NULL)
		return oddHead;
	if (oddHead == NULL)
		return evenHead;
	evenTail->next = NULL;
	oddTail->next = evenHead;
	return oddHead;
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
		head = evenAfterOdd(head);
		print(head);
	}
	return 0;
}