#include <iostream>
using namespace std;

int length(char input[])
{
    int len = 0;
    for (int i = 0; input[i] != '\0'; i += 1)
    {
        len++;
    }
    return len;
}

void replacePi(char input[], int start)
{
    if (input[start] == '\0' or input[start + 1] == '\0') // base case
    {
        return;
    }
    replacePi(input, start + 1); // recursive call
    // small work
    if (input[start] == 'p' and input[start + 1] == 'i')
    {
        int len = length(input);
        input[len + 2] = '\0';
        for (int i = len - 1; i >= start + 2; i--)
        {
            input[i + 2] = input[i];
        }
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}

void replacePi(char input[])
{
    replacePi(input, 0);
}

int main(int argc, char const *argv[])
{

    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;

    return 0;
}