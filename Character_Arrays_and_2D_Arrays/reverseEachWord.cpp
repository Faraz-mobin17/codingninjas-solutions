#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[])
{
    int start = 0, end = 0;
    for (int i = 0; i <= strlen(input); i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                char temp = input[end];
                input[end] = input[start];
                input[start] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}