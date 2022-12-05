#include <iostream>
#include "StackUsingTemplate.cpp"
using namespace std;

int main(int argc, char const *argv[])
{
    StackUsingTemplate<char> s1;
    s1.push(100);
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);

    cout << "Element at the top is: " << s1.top() << endl;
    cout << "Size of the Stack: " << s1.size() << endl;
    cout << "Element deleted: " << s1.pop() << endl;
    cout << "Size of the Stack: " << s1.size() << endl;
    cout << s1.isEmpty() << endl;

    return 0;
}