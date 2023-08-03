#include <iostream>
#include <string>
#include <cstring>
using namespace std;

string lexicalOrder(char *str, int n)
{
    for (int i = 0; i < n - 1; i += 1)
    {
        for (int j = 0; j < n - i - 1; j += 1)
        {
            if (str[j] < str[j + 1])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    return str;
}

int main(int argc, char const *argv[])
{
    char name[] = "faraz";
    int n = strlen(name);
    cout << lexicalOrder(name, n);
    return 0;
}