#include <iostream>
#include "Stack.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    cout << "Element at the top is: " << s.top() << endl;
    cout << "Size of the Stack: " << s.size() << endl;
    cout << "Element deleted: " << s.pop() << endl;
    cout << "Size of the Stack: " << s.size() << endl;
    cout << s.isEmpty() << endl;
    return 0;
}