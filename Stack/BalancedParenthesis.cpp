#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isOpening(char ch)
{
    return ch == '(' || ch == '{' || ch == '[';
}
bool isMatching(char a, char b)
{
    return (a == '(' && b == ')') || (a == '{' && b == '}') || (a == '[' && b == ']');
}
bool isBalanced(string expression)
{
    // Write your code here
    string str = expression;
    stack<char> s;
    for (int i = 0; i < str.length(); i += 1)
    {
        char cur = str[i];
        if (isOpening(cur))
        {
            s.push(cur);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (!isMatching(cur, s.top()))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty();
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}