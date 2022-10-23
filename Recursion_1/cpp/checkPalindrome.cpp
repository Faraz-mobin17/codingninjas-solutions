#include <bits/stdc++.h>
using namespace std;
int helper(char input[], int start, int end)
{
    if (input[0] == '\0' || input[1] == '\0')
        return 1;
    if (start >= end)
        return 1;
    if (input[start] == input[end])
        return helper(input, start + 1, end - 1);
    else
        return 0;
}
bool checkPalindrome(char input[])
{
    // Write your code here
    int len = strlen(input);
    return helper(input, 0, len - 1);
}

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
