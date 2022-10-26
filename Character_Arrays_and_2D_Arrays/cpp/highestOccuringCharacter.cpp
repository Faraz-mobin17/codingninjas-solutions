#include <iostream>
#include <cstring>
using namespace std;
char getMaxOccCharacter(char s[])
{
    int arr[26] = {0};
    for (int i = 0; i <= strlen(s); i++)
    {
        char ch = s[i];
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}
int main()
{
    char ch[100];
    cin >> ch;
    char result = getMaxOccCharacter(ch);
    cout << result;
    return 0;
}