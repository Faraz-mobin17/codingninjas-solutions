#include <iostream>
#include <stack>
using namespace std;
// reverse string using stack with stl
int main(int argc, char const *argv[])
{
    string str;
    cout << "Enter a string to reverse it using stack\n";
    cin >> str;
    string ans = "";
    stack<char> s;
    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        s.push(ch);
    }
    while (!s.empty()) 
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "answer is: " << ans << endl;
    return 0;
}