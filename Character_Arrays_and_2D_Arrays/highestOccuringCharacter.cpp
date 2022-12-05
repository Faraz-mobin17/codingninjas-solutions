#include <iostream>
#include <cstring>
#define ASCII_SIZE 256
using namespace std;
char getMaxOccCharacter(char input[])
{

    // Write your code here
    int count[ASCII_SIZE] = {0};

    int len = strlen(input);

    for (int i = 0; i < len; i++)
    {
        char ch = input[i];
        count[ch]++;
    }
    int max = -1;
    char result;

    for (int i = 0; i < len; i++)
    {
        char ch = input[i];
        if (max < count[ch])
        {
            max = count[ch];
            result = input[i];
        }
    }

    return result;
}
int main()
{
    char ch[100];
    cin >> ch;
    char result = getMaxOccCharacter(ch);
    cout << result;
    return 0;
}