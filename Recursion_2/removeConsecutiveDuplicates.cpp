#include <iostream>
using namespace std;
int length(char input[])
{
    if (input[0] == '\0')
        return 0;
    int smallAns = length(input + 1);
    return 1 + smallAns;
}
void removeConsecutiveDuplicates(char *input)
{
    int len = length(input);
    if (len <= 1)
    {
        return;
    }
    if (input[0] != input[1])
    {
        removeConsecutiveDuplicates(input + 1);
    }
    else
    {
        int i = 1;
        for (; input[i] != '\0'; i++)
        {
            input[i - 1] = input[i];
        }
        input[i - 1] = input[i];
        removeConsecutiveDuplicates(input);
    }
}
int main(int argc, char const *argv[])
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
    return 0;
}