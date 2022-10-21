#include <iostream>
using namespace std;

void replacePi(string s)
{
    if (s.length() == 0)
    {
        return; // base case
    }
    if (s[0] == 'p' and s[1] == 'i')
    {
        cout << "3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePi(s.substr(1));
    }
}

int main(int argc, char const *argv[])
{
    replacePi("xpix");
    return 0;
}