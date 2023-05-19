#include <iostream>
using namespace std;
#include "QueueUsingArray.h"
int main(int argc, char const *argv[])
{
	/* code */
	QueueUsingArray<int> q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);
	cout << q.frontElement() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.getSize() << endl;
	return 0;
}