#include <iostream>
using namespace std;

int length(char str[])
{
    if (str[0] == '\0')
        return 0;
    int smallAns = length(str + 1);
    return 1 + smallAns;
}

int main(int argc, char const *argv[])
{
    char str[] = "abcd";
    int len = length(str);
    cout << len;
    return 0;
}