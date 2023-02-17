#include <iostream>
#include "charStack.h"
using namespace std;


int main(int argc, char const *argv[])
{
    Stack s(5);
    string str = "faraz";
    string ans = "";
    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];
        s.push(ch);
    }
    while (!s.isEmpty()) 
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout << "answer is: " << ans << endl;
    return 0;
}